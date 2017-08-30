##############################################################################################################################################################
###################################################### Disciplina: Arquitetura e Organiza��o de Computadores            ######################################
###################################################### Atividade: Avalia��o 02  Programa��o em Linguagem de Montagem    ######################################
###################################################### Programa 02 							######################################
###################################################### Grupo: - Gustavo Copini Decol					######################################
######################################################        - Jo�o Paulo Roslindo					######################################
##############################################################################################################################################################

.data													#Segmento de Dados

##############################################################################################################################################################
Vetor_DDI:	.word 0,0,0,0,0,0									# Declarando os vetores para cada um dos tipos	 #####
Vetor_POP:	.word 0,0,0,0,0,0									# de dados que os paises ter�o. Cada vetor com   #####
Vetor_PIB:	.word 0,0,0,0,0,0									# 6 posi��es, dando um total de at� 6 paises no  #####
Vetor_IDH:	.word 0,0,0,0,0,0									# c�digo					 #####
##############################################################################################################################################################
############################## Todas as Mensagens que Ser�o Utilizadas para Intera��o via Console com o Usuario ser�o criadas aqui!!! ########################
##############################################################################################################################################################
NumeroPaises:	.asciiz "\nDigite a quantidade de paises (Maximo 6, Minimo 2): "									 #####
Erro:		.asciiz "\nValor invalido!!!"														 #####
ErroIgual:	.asciiz "\nValor digitado ja existe!!!"													 #####
VetorDDI: 	.asciiz "\nDDI["															 #####
VetorPOP:	.asciiz "\nPOP["															 #####
VetorPIB:	.asciiz "\nPIB["														       	 #####
VetorIDH:	.asciiz "\nIDH["															 #####
FechaColchete:	.asciiz "]= "																 #####
Indicador:	.asciiz "\nSelecione o Indicador para ser Utilizado na Classificacao dos Paises"							 #####
Opcao1:		.asciiz "\n- 1. Populacao"														 #####
Opcao2:		.asciiz "\n- 2. PIB per Capita"														 #####
Opcao3:		.asciiz "\n- 3. IDH"															 #####
SelecionaOpcao: .asciiz "\nOpcao: "				 											 #####
Classificacao:	.asciiz "\nClassificacao dos Paises para o Criterio Selecionado: "									 #####
POPClass:	.asciiz "Populacao"														 	 #####
PIBClass:	.asciiz "PIB per Capita"													 	 #####
IDHClass:	.asciiz "IDH"																 #####		
POPRes:		.asciiz ", Populacao = "														 #####
PIBRes:		.asciiz ", PIB = "															 #####
IDHRes:		.asciiz ", IDH = "															 #####
Placar:		.asciiz "o Lugar - DDI =  "	 												    	 #####	 
Espaco:		.asciiz "\n\n"																 #####														 #####
##############################################################################################################################################################

######################################################
###            REGISTRADORES UTILIZADOS            ###
###################################################### 
### $s0 - Quantidade de Paises        	           ###  
### $s1 - Contador "i" para percorrer              ###  $s1 - Endere�o base do vetor DDI			$s1 - i					todos livres
### $s2 - Valor digitado pelo usuario para o vetor ###  $s2 - Endere�o base do vetor POP			$s2 - usado para colocacao
### $s3 - Registrador endere�o base dos vetores    ###	$s3 - Endere�o base do vetor PIB			$s3 - valor[i]             // DDI
### $s4 - Registrador para deslocamento no vetor   ###  $s4 - Endere�o base do vetor IDH			$s4 - valor[i+1]           // DDI 
### $s5 - Contador "j", percorrer na verifica��o   ###  							$s5 - nTrocou
### $s6 - Quantitade m�xima de Paises / Verifica   ###  $s6 - Teste da escolha no main				$s6 - caminhamento do i    // DDI
### $s7 - Quantidade m�nima de Paises / Verifica   ###  $s7 - Escolha do usu�rio				$s7 - caminhamento do i+1  // DDI
######################################################

.text													# Segmento de C�digo

j Main

#####################################################################################################################################
############################# FUN��ES DE COLETA DE DADOS DO USUARIO / EMPILHAMENTO DE ENDERE�OS BASE ################################
#####################################################################################################################################

VerificaDDI: # Procedimento para verificar se o DDI digitado pelo usu�rio j� se encontra no vetor
	# Deslocamento no vetor DDI (4 em 4), $s5 � o nosso J
	add $s6, $s5, $s5
	add $s6, $s6, $s6
	add $s6, $s6, $s3
	# Load no valor da posi��o do vetor para $s7 para verificar se � igual ao digitado pelo usuario
	lw $s7, 0($s6)
	# Verficar se $s0 � igual a vet[j]
	beq $s7, $s2, ValorIgual
	# Contador J � incrementado (J++)
	addi $s5, $s5, 1
	# Verificar se J � menor ou igual a I, para poder analizar I vezes o vetor, ou seja, analisar apenas o que o usuario j� digitou at� o momento
	ble $s5, $s1, VerificaDDI
	jr $ra
	
SalvaRaMain: # R�tulo com o intuito de armazenar o RA para poder voltar ao main
	# Gravando o RA para o main na Pilha
	addi $sp, $sp, -4
	sw $ra, 0($sp)
	j VetDDI

VetDDI:	# R�tulo para preencher o vetor DDI dos paises
	# Zerando o nosso $s5 (J) para podermos testar todo o vetor novamente desde o inicio	
	add $s5, $0, $0	
	# Pedindo os valores DDI para o usuario
	li $v0, 4
	la $a0, VetorDDI
	syscall
	# Printando o valor de i entre colchetes
	li $v0, 1
	addi $a0, $s1, 0
	syscall
	# Printando o fecha colchetes   
	li $v0, 4
	la $a0, FechaColchete
	syscall
	# Colocando o endere�o base do vetor DDI em $s3
	la $s3, Vetor_DDI
	# Ler o valor que o usuario vai digitar e armazena-lo em $s2
	li $v0, 5
	syscall
	addi $s2, $v0, 0
	# Chamada do procedimento de teste para verificar se o valor DDI digitado pelo usu�rio j� exite
	jal VerificaDDI
	# Deslocamento no vetor DDI (4 em 4)
	add $s4, $s1, $s1
	add $s4, $s4, $s4
	add $s4, $s4, $s3
	# Armazenar o valor digitado pelo usuario
	sw $s2, 0($s4)
	# Incrementando o contador (i++)
	addi $s1, $s1, 1
	# Verificando a quantidade de valores j� digitados, se for menor ou igual a quantidade de paises ele vai para o VetDDI novamente
	blt $s1, $s0, VetDDI
	# Load do RA do main da pilha
	lw $ra, 0($sp)
	addi $sp, $sp, 4
	# Empilhando endere�o base de ddi
	addi $sp, $sp, -16
	sw $s3, 12 ($sp)
	# Jr para continuar de onde parou no MAIN
	jr $ra

ValorInvalido:
	# Mostrando a mensagem de erro caso o valor digitado pelo usuario seja inv�lido (SYSCALL)
	addi $v0, $0, 4								
	la $a0, Erro							
	syscall									
	j Main
	
ValorIgual:
	# Mostrando a mensagem de erro caso o valor digitado pelo usuario j� exista no vetor DDI
	addi $v0, $0, 4								
	la $a0, ErroIgual							
	syscall		
	# Zerando o nosso $s5 (J) para podermos testar todo o vetor novamente desde o inicio	
	add $s5, $0, $0						
	j VetDDI
	
VetPOP: # Colocar valores dentro do vetor pop referente a cada pais no ddi
	# Pedindo os valores POP para o usuario
	li $v0, 4
	la $a0, VetorPOP
	syscall
	# Printando o valor de i entre colchetes
	li $v0, 1
	addi $a0, $s1, 0
	syscall
	# Printando o fecha colchetes
	li $v0, 4
	la $a0, FechaColchete
	syscall
	# Colocando o endere�o base do vetor POP em $s3
	la $s3, Vetor_POP
	# Ler o valor que o usuario vai digitar e armazena-lo em $s2
	li $v0, 5
	syscall
	addi $s2, $v0, 0
	# Deslocamento no vetor POP (4 em 4)
	add $s4, $s1, $s1
	add $s4, $s4, $s4
	add $s4, $s4, $s3
	# Armazenar o valor digitado pelo usuario
	sw $s2, 0($s4)
	# Incrementando o contador (i++)
	addi $s1, $s1, 1
	# Verificando a quantidade de valores j� digitados, se for maior ou igual a quantidade de paises ele vai para o zerador
	blt $s1, $s0, VetPOP
	# Empilhando endere�o base de POP
	sw $s3, 8 ($sp)
	# Jr para continuar de onde parou no MAIN
	jr $ra
	
VetPIB: # Colocar valores dentro do vetor pop referente a cada pais no PIB
	# Pedindo os valores PIB para o usuario
	li $v0, 4
	la $a0, VetorPIB
	syscall
	# Printando o valor de i entre colchetes
	li $v0, 1
	addi $a0, $s1, 0
	syscall
	# Printando o fecha colchetes
	li $v0, 4
	la $a0, FechaColchete
	syscall
	# Colocando o endere�o base do vetor PIB em $s3
	la $s3, Vetor_PIB
	# Ler o valor que o usuario vai digitar e armazena-lo em $s2
	li $v0, 5
	syscall
	addi $s2, $v0, 0
	# Deslocamento no vetor PIB (4 em 4)
	add $s4, $s1, $s1
	add $s4, $s4, $s4
	add $s4, $s4, $s3
	# Armazenar o valor digitado pelo usuario
	sw $s2, 0($s4)
	# Incrementando o contador (i++)
	addi $s1, $s1, 1
	# Verificando a quantidade de valores j� digitados, se for maior ou igual a quantidade de paises ele vai para o zerador
	blt $s1, $s0, VetPIB
	# Empilhando endere�o base de PIB
	sw $s3, 4 ($sp)
	# Jr para continuar de onde parou no MAIN
	jr $ra

VetIDH: # Colocar valores dentro do vetor pop referente a cada pais no IDH
	# Pedindo os valores IDH para o usuario
	li $v0, 4
	la $a0, VetorIDH
	syscall
	# Printando o valor de i entre colchetes
	li $v0, 1
	addi $a0, $s1, 0
	syscall
	# Printando o fecha colchetes
	li $v0, 4
	la $a0, FechaColchete
	syscall
	# Colocando o endere�o base do vetor IDH em $s3
	la $s3, Vetor_IDH
	# Ler o valor que o usuario vai digitar e armazena-lo em $s2
	li $v0, 5
	syscall
	addi $s2, $v0, 0
	# Deslocamento no vetor IDH (4 em 4)
	add $s4, $s1, $s1
	add $s4, $s4, $s4
	add $s4, $s4, $s3
	# Armazenar o valor digitado pelo usuario
	sw $s2, 0($s4)
	# Incrementando o contador (i++)
	addi $s1, $s1, 1
	# Verificando a quantidade de valores j� digitados, se for maior ou igual a quantidade de paises ele vai para o zerador
	blt $s1, $s0, VetIDH
	# Empilhando endere�o base de IDH
	sw $s3, 0 ($sp)
	# Jr para continuar de onde parou no MAIN
	jr $ra

#####################################################################################################################################

#####################################################################################################################################
########################################## FUN��ES PR�-ORDENA��O / DESEMPILHAMENTO DE ENDERE�OS BASE ################################
#####################################################################################################################################

EscolhaOrdenacao: # Aqui o usuario ira digitar o valor da ordenacao escolhida
	# Mensagem para o usuario escolher a ordem
	li $v0, 4
	la $a0, Indicador
	syscall
	# op��es
	li $v0, 4
	la $a0, Opcao1
	syscall
	li $v0, 4
	la $a0, Opcao2
	syscall
	li $v0, 4
	la $a0, Opcao3
	syscall	
	li $v0, 4
	la $a0, SelecionaOpcao
	syscall
	#lendo valor
	li $v0, 5
	syscall
	addi $s7, $v0, 0
	# Empilhar o indicador utilizado pelo usu�rio ($s7)
	addi $sp, $sp -4
	sw $s7, 0($sp)
	#voltando para o main
	jr $ra

Desempilha: # Fun��o que coloca o end. inicial de cada vetor nos registradores correspondentes
	# Desempilhando os endere�os bases
	lw $s4, 0($sp)
	lw $s3, 4($sp)
	lw $s2, 8($sp)
	lw $s1, 12($sp)
	addi $sp, $sp, 16
	jr $ra
	
ParametroPOP: # Fun��o para colocar os dados da op��o selecionada nos registradores de argumento antes de chamar o bubble
	addi $a0, $s0, -1
	add $a1, $s2, $0
	add $a2, $s1, $0
	# Zerar os registradores inuteis antes de ir para o BubbleSort 
	jal Zerador	
	j BubbleSort
	
ParametroPIB: # Fun��o para colocar os dados da op��o selecionada nos registradores de argumento antes de chamar o bubble
	addi $a0, $s0, -1
	add $a1, $s3, $0
	add $a2, $s1, $0
	# Zerar os registradores inuteis antes de ir para o BubbleSort 
	jal Zerador	
	j BubbleSort

ParametroIDH: # Fun��o para colocar os dados da op��o selecionada nos registradores de argumento antes de chamar o bubble
	addi $a0, $s0, -1
	add $a1, $s4, $0
	add $a2, $s1, $0
	# Zerar os registradores inuteis antes de ir para o BubbleSort 
	jal Zerador	
	j BubbleSort

#####################################################################################################################################

#####################################################################################################################################
############################################################# ORDENA��O #############################################################
#####################################################################################################################################

BubbleSort: # Fun��o que ir� ordenador os valores dentro do vetor escolhido como parametro de ordena��o
	bge $s5, $a0, UltimoZerador  # While(N_trocou != tamanho do vetor)
	addi $s5, $0, 0
	addi $s1, $0,0
	jal TrocaTroca	
	j BubbleSort

TrocaTroca: # Fun��o para verificar se � necessaria a troca
	# Constante de parada
	bge $s1, $a0, BubbleSort
	# Caminhamento para i gravado em $s6
	add $s6, $s1, $s1
	add $s6, $s6, $s6
	add $s6, $s6, $a1
	#####################################################################
	addi $s1, $s1,1                         #i+1			   ##
	#####################################################################
	# Caminhamento para i+1 gravado em $s7
	add $s7, $s1, $s1
	add $s7, $s7, $s7
	add $s7, $s7, $a1
	#####################################################################
	subi $s1, $s1, 1			#i-1 para voltar ao normal ##
	#####################################################################
	# Load Words
	lw $s3, 0($s6)
	lw $s4, 0($s7)
	# Verifica se � menor
	blt $s3, $s4, FazTrocaVet
	# Incrementa i++ e n_Trocas++
	addi $s1, $s1, 1
	addi $s5, $s5, 1
	# If ($s1 < $a0) se o contador 'i" for menor que a quantidade de valores no vetor
	blt $s1, $a0, TrocaTroca	
	jr $ra

FazTrocaVet: # Fun��o para trocar os valores	
	addi $a3, $s3, 0			# Auxiliar = Vet[i]
	sw $s4, 0($s6)				# Fazendo a troca, Vet[i] = Vet[i+1]	
	sw $a3, 0($s7)				# vet[i+1] = Auxiliar 
	j FazTrocaDDI

FazTrocaDDI: # Fun��o para trocar os DDI's
	# Pela falta de registradores para fazer o processo de troca no DDI seguindo o vetor indicador, iremos jogar alguns registradores
	# na pilha, s�o eles: $s3, $s4, Ss6 e $s7
	# Empilhando os registradores
	addi $sp, $sp, -16
	sw $s7, 12($sp)
	sw $s6, 8($sp)
	sw $s4, 4($sp)
	sw $s3, 0($sp)
	# Caminhamento para i gravado em $s6
	add $s6, $s1, $s1
	add $s6, $s6, $s6
	add $s6, $s6, $a2
	#####################################################################
	addi $s1, $s1,1                         #i+1			   ##
	#####################################################################
	# Caminhamento para i+1 gravado em $s7
	add $s7, $s1, $s1
	add $s7, $s7, $s7
	add $s7, $s7, $a2
	#####################################################################
	subi $s1, $s1, 1			#i-1 para voltar ao normal ##
	#####################################################################
	# Load Words
	lw $s3, 0($s6)
	lw $s4, 0($s7)
	# Trocando i pelo i+1
	addi $a3, $s3, 0			# Auxiliar = Vet[i]
	sw $s4, 0($s6)				# Fazendo a troca, Vet[i] = Vet[i+1]	
	sw $a3, 0($s7)				# vet[i+1] = Auxiliar 
	# Desimpilhando os valores originais dos registradores
	lw $s3, 0($sp)
	lw $s4, 4($sp)
	lw $s6, 8($sp)
	lw $s7, 12($sp)
	addi $sp, $sp 16
	# i++
	addi $s1, $s1, 1
	j TrocaTroca

#####################################################################################################################################

#####################################################################################################################################
###################################################### MAIN E OUTRAS FUN��ES �TEIS ##################################################
#####################################################################################################################################

Main:   # No r�tulo MAIN do c�digo, primeiramente, iremos analisar se a quantidade de paises digitada pelo usu�rio � v�lida 
	# Inicializando dois registradores, um em 2 e outro em 6, para verificar o tamanho digitado pelo usu�rio
	addi $s6, $0, 2											 
	addi $s7, $0, 6
	# Pedindo a quantidade de paises para o usuario (SYSCALL)
	addi $v0, $0, 4 						
	la $a0, NumeroPaises							
	syscall
	# Lendo o numero digitado pelo usuario e armazenando o mesmo em $s0 (SYSCALL)
	addi $v0, $0, 5								
	syscall									
	addi $s0, $v0, 0
	# Testando se o valor que o usuario digitou � valido				
	bgt $s0, $s7, ValorInvalido							# if ($a0 > 6) ent�o o valor � inv�lido
	blt $s0, $s6, ValorInvalido							# if ($a0 < 2) ent�o o valor � inv�lido
	# Zerando os registradores $s6 e $s7 para poder reutiliza-los na fun��o de verifica��o
	add $s6, $0, $0											 
	add $s7, $0, $0
	# Chamando a fun��o para preencher o vetor de DDI's
	jal SalvaRaMain
	# zerando registradores usados anteriormente 
	jal Zerador
	# POPULACAO
	jal VetPOP
	# zerando registradores usados anteriormente
	jal Zerador
	# PIB
	jal VetPIB
	# Zerando registradores usados anteriormente
	jal Zerador
	# IDH
	jal VetIDH
	# Zerando registradores usados anteriormente
	jal Zerador
	# Desempilhando os endere�os bases
	jal Desempilha
	# Agora o usu�rio ir� escolher o crit�rio de ordena��o dos paises
	jal EscolhaOrdenacao
	# Se for por POP
	addi $s6, $0, 1
	beq $s7, $s6, ParametroPOP
	# Se for por PIB
	addi $s6, $0, 2
	beq $s7, $s6, ParametroPIB
	# Se for por IDH
	addi $s6, $0, 3
	beq $s7, $s6, ParametroIDH
	
Zerador:
	addi $s1, $0, 0
	addi $s2, $0, 0
	addi $s4, $0, 0
	addi $s5, $0, 0
	addi $s6, $0, 0
	addi $s7, $0, 0
	jr $ra

UltimoZerador:
	addi $s1, $0, 1
	addi $s2, $0, 0
	addi $s5, $0, 0
	addi $s6, $0, 0
	addi $s7, $0, 0
	# Recuperar o indicador selecionado pelo usu�rio
	lw $s4, 0($sp)
	addi $sp, $sp, 4
	j Colocacao
	
Colocacao: # Mostra os paises na ordem de suas respectivas coloca��es
	# Enquanto for diferente do tamanho do vetor, executar� o programa
	bgt  $s1, $s0, Exit
	# Syscall frufru :3
	li $v0, 4
	la $a0, Espaco 
	syscall
	# Chamando o Syscall para imprimir a posi��o, (famoso I)
	li $v0, 1
	addi $a0, $s1, 0
	syscall
	# Lugar print
	li $v0, 4
	la $a0, Placar 
	syscall
	# Caminhando no vetor DDI
	add $s2, $s1, $s1
	add $s2, $s2, $s2
	add $s2, $s2, $a2
	lw $s3, -4($s2)
	# Printando o valor de DDI
	li $v0, 1
	addi $a0, $s3, 0
	syscall
	# Testes para POP
	addi $s2, $0, 1
	beq $s2, $s4, ImprimePOP
	# Testes para PIB
	addi $s2, $0, 2
	beq $s2, $s4, ImprimePIB
	# Testes para IDH
	addi $s2, $0, 3
	beq $s2, $s4, ImprimeIDH
	
ImprimePOP: # Funcao para imrpimir o vetor pop
	li $v0, 4
	la $a0, POPRes
	syscall
	# Caminha no vetor POP
	add $s2, $s1, $s1
	add $s2, $s2, $s2
	add $s2, $s2, $a1
	lw $s3, -4($s2)
	# Printa valor do vetor POP
	li $v0, 1
	addi $a0, $s3, 0
	syscall
	# I++
	addi $s1, $s1, 1
	j Colocacao

ImprimePIB: # Funcao para imrpimir o vetor PIB
	li $v0, 4
	la $a0, PIBRes
	syscall
	# Caminha no vetor PIB
	add $s2, $s1, $s1
	add $s2, $s2, $s2
	add $s2, $s2, $a1
	lw $s3, -4($s2)
	# Printa valor do vetor PIB
	li $v0, 1
	addi $a0, $s3, 0
	syscall
	# I++
	addi $s1, $s1, 1
	j Colocacao
	
ImprimeIDH: # Funcao para imrpimir o vetor IDH
	li $v0, 4
	la $a0, IDHRes
	syscall
	# Caminha no vetor IDH
	add $s2, $s1, $s1
	add $s2, $s2, $s2
	add $s2, $s2, $a1
	lw $s3, -4($s2)
	# Printa valor do vetor IDH
	li $v0, 1
	addi $a0, $s3, 0
	syscall
	# I++
	addi $s1, $s1, 1
	j Colocacao
	
Exit:	
	nop
