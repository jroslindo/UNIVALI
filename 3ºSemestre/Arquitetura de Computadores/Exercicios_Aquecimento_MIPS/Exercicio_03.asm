.data		# segmento de dados
Array_A: 	.word 0, 0, 0, 0, 0, 0, 0, 0, 0
Newline:	.asciiz "\n\n"
Msg1:		.asciiz "\n\nLEITURA DOS ELEMENTOS DO VETOR:"
Msg2:		.asciiz "\n\nEntre com A["
Msg3: 		.asciiz "\n\nAPRESENTAÇÃO DO VETOR LIDO:"
Msg4:		.asciiz "\n\nA["
FechaLer: 	.asciiz "] : "
FechaPrint: 	.asciiz "] = "
# declarar o vetor A
.text		# segmento de codigo
main:
la $s6, Array_A		# salvando o endereço base do vetor   
addi $s0, $0, 0		# inicializando i=0
addi $s3, $0, 0		# inicializando j=0
li $v0, 4		# chamada 4
la $a0, Msg1 		# mensagem 1
syscall
loop1:
li $v0, 4		# chamada 4
la $a0, Msg2 		# mensagem 2
syscall
li  $v0, 1              # chamada 1
add $a0, $0, $s0	# $s0 = numero lido
syscall     
li $v0, 4		# chamada 4
la $a0, FechaLer 	# mensagem fechar ler
syscall
add $t1, $s0, $s0       # $t1 = 2.i  
add $t1, $t1, $t1       # $t1 = 4.i
add $t1, $t1, $s6       # $t1 = end.base + 4.i (deslocamento) = end. de save[i]
li  $v0, 5              # chamada 5 
syscall                    
add $s1, $v0, $0        # salva $v0 em $s1
sw $s1, 0($t1)		# armazena s1 nas posições do array 	
slti $t0, $s0, 7	#se i<8 entao $t0=1 senão $t0=0
beq $t0, $0, main2	#se $t0=0 então vai para o loop de prints
addi $s0, $s0, 1	#i++
j loop1			#volta o inicio do for]
main2:
li  $v0, 4              # chamada 4
la  $a0, Msg3           # Mensagem 3
syscall  
loop2:
li  $v0, 4              # chamada 4
la  $a0, Msg4           # Mensagem 4
syscall  
add $t1, $s3, $s3       # $t1 = 2.j  
add $t1, $t1, $t1       # $t1 = 4.j
add $t1, $t1, $s6       # $t1 = end.base + 4.j (deslocamento) = end. de save[j]
li  $v0, 1              # chamada 1
add $a0, $0, $s3	# $s4 = numero lido
syscall
li  $v0, 4              # chamada 4
la  $a0, FechaPrint     # fecha print
syscall  
li  $v0, 1              # chamada 1
lw $s2, 0($t1)		# carregando o valor da posição $t1 do array A
add $a0, $0, $s2	# $s2 = numero lido da posicao do array
syscall   
slti $t0, $s3, 7	#se j<8 entao $t0=1 senão $t0=0
beq $t0, $0, exit	#se $t0=0 então vai para o loop de prints
addi $s3, $s3, 1	#i++
j loop2			#volta o inicio do for]
exit:
li $v0,10		#finaliza o programa
syscall		            
