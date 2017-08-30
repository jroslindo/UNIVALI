######################################################################################################################################
######################################## Disciplina: Arquitetura e Organização de Computadores #######################################
######################################## Atividade: Avaliação 01  Programação em Linguagem de Montagem ###############################
######################################## Programa 01 							##############################
######################################## Grupo: - Gustavo Copini Decol					##############################
########################################        - João Paulo Roslindo					##############################
######################################################################################################################################

	.data # Segmento de Dados
	
Vetor_A: 	.word 0, 0, 0, 0, 0, 0, 0, 0					# Vetor_A de 8 Posições Inicializadas em 0
Mensagem1:	.asciiz "\nEntre com o tamanho do vetor (máx. = 8, min = 2): "	############################################
Erro:		.asciiz "\nValor inválido!"					############################################
Mensagem2:	.asciiz "\nVetor_A["						## MENSAGENS PARA INTERAGIR COM O USUÁRIO ##
Mensagem3:	.asciiz "] = "							############################################
Mensagem4:	.asciiz "\nA soma de todos os elementos do vetor é "		############################################

	.text # Segmento de Codigo
main:
	la $s6, Vetor_A							# Salvando o endereço base do Vetor_A em $s6
	addi $s5, $0, 0							# inicializando i=0
	addi $s4, $0, 1							# inicializando j=0 (criado pois a inserção ocorre i-1 vzs)
	addi $s1, $0, 0							# inicializando um k=0
	addi $s2, $0, 0							# inicializando um $s2(soma) em 0
loop1:
# SOLICITANDO AO USUARIO O NUMERO DE ELEMENTOS NO VETOR A
	li $v0, 4							# Carregando chamada 4
	la $a0, Mensagem1						# Executando a mensagem 1
	syscall
# LENDO O NUMERO DIGITADO PELO USUARIO
	li $v0, 5							# Carregando chamada 5
	syscall
	add $s0, $v0, $0						# Colocando o tamanho do vetor digitado pelo usuario em $s0
# VERIFICAÇÃO SE O NUMERO DIGITADO PELO USUARIO É VALIDO
	slti $t0, $s0, 2						# Se o numero $s0 digitado pelo usuario for menor que 2 $t0=1
	beq $t0, $0, teste2						# Se $t0=0, valor foi válido e o programa fara outro teste
	j errou								# Vai para a mensagem de erro
teste2:
# SEGUNDA VERIFICAÇÃO SE O NUMERO É VALIDO OU NAO
	slti $t0, $s0, 9						# Se o numero $s0 digitado pelo usuario for menor que 9 $t0=1
	addi $s7, $0, 1							# $s7=1 para comparar com o $t0, caso o valor seja valido							
	beq $t0, $s7, loop2						# Se $t0=$s7 (1=1) o valor é valido e o programa segue
	j errou								# Vai para a mensagem de erro
errou:
# PRINT DO AVISO DE VALOR INVALIDO
	li $v0, 4							# Carregando chamada 4
	la $a0, Erro							# Executando a mensagem de erro
	syscall
	j loop1								# Volta a solicitar outro valor no loop1
loop2:
# SOLICITA AO USUARIO OS VALORES A SEREM COLOCADOS NO VETOR A
	li $v0, 4							# Carregando chamada 4
	la $a0, Mensagem2						# Executando a mensagem 2
	syscall
	li  $v0, 1               					# chamada 1
      	add $a0, $0, $s5						# $s5 = numero lido (i)
     	syscall  	
	li $v0, 4							# Carregando chamada 4
	la $a0, Mensagem3						# Executando a mensagem 3
	syscall
	add $t1, $s5, $s5      						# $t1 = 2.i  
	add $t1, $t1, $t1      						# $t1 = 4.i
	add $t1, $t1, $s6       					# $t1 = end.base + 4.i (deslocamento) = end. de save[i]
	li  $v0, 5             						# Chamada 5 
	syscall                    
	add $s3, $v0, $0        					# Salva $v0 em $s3
	sw $s3, 0($t1)							# Armazena s1 nas posições do array 
	slt $t7, $s4, $s0						# Se j($s4)<$s0, então $t7 recebe 1
	beq $t7, $0, loop3						# Caso $t7 for igual a 0 ele vai para o proximo loop
	addi $s5, $s5, 1						# i++
	addi $s4, $s4, 1						# j++
	j loop2	
loop3:
# LOOP QUE IRA  REALIZAR O SOMATORIO DO VETOR A
	beq $s1, $s0 soma						# Se $s1(k)= $s0(quantidade de valores) ->proximo rotulo
	add $t1, $s1, $s1      						# $t1 = 2.k  
	add $t1, $t1, $t1      						# $t1 = 4.k
	add $t1, $t1, $s6       					# $t1 = end.base + 4.k (deslocamento) = end. de save[k]
	lw $t5, 0($t1)							# carregando o valor de cada posição em $t3
	add $s2, $s2, $t5						# somatorio de cada posição do vetor em $s2 
	slt $t4, $s1, $s0						# se k($s1)<$s0 entao $t4=1 senão $t4=0
	beq $t4, $0, soma						# se $t4=0 então vai para o loop de printar a soma
	addi $s1, $s1, 1						# k++
	j loop3
soma:
#PRINTAR O RESULTADO DO SOMATORIO DO VETOR A
 	li  $v0, 4                					# chamada 4
        la  $a0, Mensagem4            					# Mensagem 4
        syscall   
        li  $v0, 1               					# chamada 1
     	add $a0, $0, $s2						# $s2 = numero lido
      	syscall
      	j exit        
exit:
#FINALIZA PROGRAMA
	li $v0, 10							
	syscall
