 .data
        val1:   .word 0x7FFF 
        val3:   .word 0x8000
        val3:   .word 32767 
        val4:   .word -32768 
        .text
        .globl main
main:   lw $t0, val1    # $t0 is 32767
        lw $t1, val2    # $t1 is 32767
        lw $t2, val3    # $t1 is 32767
        lw $t3, val4    # $t1 is 32767