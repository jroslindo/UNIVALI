.data
newline:  .asciiz "\n"
.text			#segmento de codigo
main:
addi $s0, $0, 0		#inicializando i=0
loop:
li $v0, 1		#chamada 1
move $a0, $s0		#carrega i em $a0 
syscall
li $v0, 4		#chamada 4
la $a0, newline		#quebra de linha entre os numeros
syscall
slti $t0, $s0, 9	#se i<10 entao $t0=1 sen�o $t0=0
beq $t0, $0, exit	#se $t0=0 ent�o sai do la�o
addi $s0, $s0, 1	#i++
j loop			#volta o inicio do for
exit:
li $v0,10		#finaliza o programa
syscall		
