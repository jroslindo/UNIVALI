####################################################################
# Exerc�cio 07b - Patterson pags. 72/73
# Mostra a compila��o de um procedimento que n�o chama outro
####################################################################
# Trecho em C:
# int leaf_example (int g, int h, int i, int j) {
#    int f;
#    f = (g + h) - (i + j);
#    return f;

      .text   # segmento de c�digo (programa)
	 j   main	

leaf_example:
       sub $sp, $sp, 12    # ajusta a pilha para 3 valores
       sw  $t1, 8($sp)     # salva o conte�do de $t1
       sw  $t0, 4($sp)     # salva o conte�do de $t0
       sw  $s0, 0($sp)     # salva o conte�do de $s0

       add $t0, $a0, $a1   # $t0 = g + h
       add $t1, $a2, $a3   # $t1 = i + j
       sub $s0, $t0, $t1   # f = $t0 - $t1
       add $v0, $s0, $zero # return f

       lw  $s0, 0($sp)     # restaura $s0 da pilha
       lw  $t0, 4($sp)     # restaura $t0 da pilha
       lw  $t1, 8($sp)     # restaura $t1 da pilha
       add $sp, $sp, 12    # ajusta a pilha
       jr  $ra             # retorna do procedimento

main:    
       addi $t1, $zero, 1  # inicia reg. com valor diferente de 0
       addi $t0, $zero, 2  # inicia reg. com valor diferente de 0
       addi $s0, $zero, 3  # inicia reg. com valor diferente de 0

       addi $a0, $zero, 4  # inicializa 1� par�metro (g)
       addi $a1, $zero, 3  # inicializa 2� par�metro (h)
       addi $a2, $zero, 2  # inicializa 3� par�metro (i)
       addi $a3, $zero, 1  # inicializa 4� par�metro (j)

       jal leaf_example    # chama o procedimento

       nop                 # n�o faz nada. $v0 tem o resultado do procedimento
