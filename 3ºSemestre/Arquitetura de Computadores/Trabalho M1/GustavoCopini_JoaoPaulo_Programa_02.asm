######################################################################################################################################
######################################## Disciplina: Arquitetura e Organização de Computadores #######################################
######################################## Atividade: Avaliação 01  Programação em Linguagem de Montagem ###############################
######################################## Programa 02 							##############################
######################################## Grupo: - Gustavo Copini Decol					##############################
########################################        - João Paulo Roslindo					##############################
######################################################################################################################################
	
	.data # Segmento de Dados
	
Vetor_A: 	.word 0, 0, 0, 0, 0, 0, 0, 0					# Vetor_A de 8 Posições Inicializadas em 0
Vetor_B: 	.word 0, 0, 0, 0, 0, 0, 0, 0					# Vetor_B de 8 Posições Inicializadas em 0
Vetor_C: 	.word 0, 0, 0, 0, 0, 0, 0, 0					# Vetor_C de 8 Posições Inicializadas em 0
Mensagem1:	.asciiz "\nEntre com o tamanho do vetor (máx. = 8, min = 2): "	############################################
Erro:		.asciiz "\nValor inválido!\n"					############################################
Mensagem2:	.asciiz "\nVetor_A["						## MENSAGENS PARA INTERAGIR COM O USUÁRIO ##
Mensagem3:	.asciiz "\nVetor_B["						############################################
Mensagem4:	.asciiz "\nVetor_C["						############################################
Mensagem5:	.asciiz "] = "							############################################


	.text #segmento de codigo
	
loadAdress:
	la $s5, Vetor_A 							############################################
	la $s6, Vetor_B								######### posi inicial de cada vetor #######
	la $s7, Vetor_C								############################################
	
testeTamanho:
	addi $t0, $0, 8								#constante t0=8
	addi $t1, $0, 2								#constante t1=2
	#print msg 1
	addi $v0, $0, 4 							#chamada 4 
	la $a0, Mensagem1							#carrega msg 1
	syscall									#syscall
	
	#lendo nº usuario
	addi $v0, $0, 5								#chamada 5
	syscall									#syscall
	addi $s0, $v0, 0							#s0 = numero do usuario
	
	#testando
	bgt $s0, $t0, erro							#if (x>8) erro
	blt $s0, $t1, erro							#if (x<2) erro
	j zerador

erro:
	addi $v0, $0, 4								#chamada 4
	la $a0, Erro								#carrega msg Erro
	syscall									#syscall
	j testeTamanho								#volta para o looping
	
zerador:
	addi $t0, $0, 0								#zerando temporarias usadas anteriormente
	addi $t1, $0, 0								#zerando temporarias usadas anteriormente
	j inserir_A

zerador2:
	addi $t0, $0, 0								#zerando temporarias usadas anteriormente
	addi $t1, $0, 0								#zerando temporarias usadas anteriormente
	addi $t5, $0, 0								#zerando temporarias usadas anteriormente
	addi $t6, $0, 0								#zerando temporarias usadas anteriormente
	addi $s1, $0, 0								#inicializando em 0
	j inserir_B								#depois de zeradas as temporarias, vai para o inserir_B

zerador3:
	addi $t0, $0,0
	j comparador
	
	
inserir_A:
	beq $t0, $s0, zerador2							#if (i==tamanho vetor) então vai para o zerador 2	
	#print msg 1
	addi $v0, $0, 4 							#chamada 4 
	la $a0, Mensagem2							#carrega msg 1
	syscall									#syscall
	
	#print int [i]
	addi $v0, $0, 1 							#chamada 1
	add  $a0, $t0, $0							#carrega contador I
	syscall									#syscall
	
	#print msg 5 "]="
	addi $v0, $0, 4 							#chamada 4 
	la $a0, Mensagem5							#carrega msg 5
	syscall									#syscall
		
	#posi do vetor para t5	
	add $t5, $t0, $t0							#contador * contador  [1+1]
	add $t5, $t5, $t5							#[2+2]
	add $t5, $t5, $s5							#posi inicial vet + i*4
	
	#read valor
	addi $v0, $0, 5 							#chamada 5
	syscall									#syscall
	addi $s1, $v0, 0							#$s1 recebe valor usuario
	
	sw $s1, 0($t5)								#gravando
	addi $t0, $t0,1								#i++;
	j inserir_A								#looping
	
inserir_B: 	
	beq $t0, $s0, zerador3						#if (i==tamanho vetor) então vai para o comparador	
	#print msg 1
	addi $v0, $0, 4 							#chamada 4 
	la $a0, Mensagem3							#carrega msg 3
	syscall									#syscall
	
	#print int [i]
	addi $v0, $0, 1 							#chamada 1
	add  $a0, $t0, $0							#carrega contador I
	syscall									#syscall
	
	#print msg 5 "]="
	addi $v0, $0, 4 							#chamada 4 
	la $a0, Mensagem5							#carrega msg 5
	syscall									#syscall
	
	#posi do vetor para t5	
	add $t6, $t0, $t0							#contador * contador  [1+1]
	add $t6, $t6, $t6							#[2+2]
	add $t6, $t6, $s6							#posi inicial vet + i*4
	
	#read valor
	addi $v0, $0, 5 							#chamada 5
	syscall									#syscall
	addi $s1, $v0, 0							#$s1 recebe valor usuario
	
	sw $s1, 0($t6)								#gravando
	addi $t0, $t0,1								#i++;
	j inserir_B								#looping
			
comparador:									#ira verificar o maior dos numeros na posição de cada vetor A[i] e B[i]
	beq $t0, $s0, exit
	#print msg 4
	addi $v0, $0, 4 							#chamada 4 
	la $a0, Mensagem4							#carrega msg 4
	syscall									#syscall	
	#print int [i]
	addi $v0, $0, 1 							#chamada 1
	add  $a0, $t0, $0							#carrega contador I
	syscall									#syscall	
	#print msg 5 "]="
	addi $v0, $0, 4 							#chamada 4 
	la $a0, Mensagem5							#carrega msg 5
	syscall									#syscall	
	
	add $t5, $t0, $t0							#contador * contador  [1+1]
	add $t5, $t5, $t5							#[2+2]
	add $t5, $t5, $s5							#posi inicial vet + i*4
	lw  $s1, 0($t5)								#gravando no s1 a posi de $s1=Vetor_A[i]				
	add $t6, $t0, $t0							#contador * contador  [1+1]
	add $t6, $t6, $t6							#[2+2]
	add $t6, $t6, $s6							#posi inicial vet + i*4
	lw  $s2, 0($t6)								#gravando no s2 a posi de $s2=Vetor_B[i]
	add $t7, $t0, $t0							#contador * contador  [1+1]
	add $t7, $t7, $t7							#[2+2]
	add $t7, $t7, $s7							#posi inicial vet + i*4
		
	addi $t0, $t0,1								#i++;
	bge $s1, $s2, bota_A_em_C						#if (s1>=s2) bota a, se não bota b
	j bota_B_em_C								#se não
	
bota_A_em_C:
	sw $s1, 0($t7)								#colocando o maior valor no vetor
	#print int [i]
	addi $v0, $0, 1 							#chamada 1
	add  $a0, $s1, $0							#carrega o valor maior
	syscall									#syscall
	j comparador
	
bota_B_em_C:
	sw $s2, 0($t7)								#colocando o maior valor no vetor
	#print int [i]
	addi $v0, $0, 1 							#chamada 1
	add  $a0, $s2, $0							#carrega o valor maior
	syscall									#syscall
	j comparador

	
exit: nop 
	
