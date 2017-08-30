.data 		#segmento de dados	
newline:  .asciiz "\n"
Msg1:     .asciiz "\n\n Entre com um valor de X: "
Msg2:     .asciiz "\n\n Entre com um valor de Y: "
Msg3:     .asciiz "\n\n A soma de X e Y é igual a: "
buffer:   .asciiz ""
.text 		#segmento de codigo
#PEGANDO O X
#PRINT STRING
li $v0,4		#chamada 4
la  $a0, Msg1		#mensagem 1   
syscall 		
#READ INT
li $v0,5		#chamada5
syscall
add $s0, $v0, $0	#salvando $v0 em $s0 ($s0 = X)
#PEGANDO O Y
#PRINT STRING
li $v0,4		#chamada 4
la  $a0, Msg2		#mensagem 1   
syscall 		
#READ INT
li $v0,5		#chamada5
syscall
add $s1, $v0, $0	#salvando v0 em $s0 ($s0 = Y)
#SOMA X E Y E MOSTRA O RESULTADO DA SOMA
li $v0,4		#chamada 4
la $a0, Msg3		#mensagem 3
syscall
li $v0,1		#chamada 1
add $s3, $s0, $s1 	#salvando a soma de Y e Y em $s3
add $a0, $s3, $0  	# $a0=$s3
syscall
li $v0,10
syscall