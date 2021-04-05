/************************************************************/
/* Author         : A . MOSAD                               */
/* Date           : 4 / 8 / 2020                            */
/* version        : V01                                     */
/************************************************************/
#ifndef BIT_MATH_H
#define BIT_MATH_H

#define    SET_BIT(REG,BIT)    (REG |= (1 << BIT))

#define    CLR_BIT(REG,BIT)    (REG &= ~(1 << BIT))

#define    TOG_BIT(REG,BIT)    (REG ^= ( 1 << BIT))

#define    GET_BIT(REG,BIT)    ((REG>>BIT) & 1)

#define    IS_CLR(REG,BIT)  (!(REG & (1<<BIT)))

#define    IS_SET(REG,BIT)     (REG & (1<<BIT))



/* Set a certain bit in any register */
#define SET_BIT(REG,BIT) (REG|=(1<<BIT))

/* Clear a certain bit in any register */
#define CLEAR_BIT(REG,BIT) (REG&=(~(1<<BIT)))

/* Toggle a certain bit in any register */
#define TOGGLE_BIT(REG,BIT) (REG^=(1<<BIT))

/* Rotate right the register value with specific number of rotates */
#define ROR(REG,num) ( REG= (REG>>num) | (REG<<(8-num)) )

/* Rotate left the register value with specific number of rotates */
#define ROL(REG,num) ( REG= (REG<<num) | (REG>>(8-num)) )

/* Check if a specific bit is set in any register and return true if yes */
#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )

/* Check if a specific bit is cleared in any register and return true if yes */
#define BIT_IS_CLEAR(REG,BIT) ( !(REG & (1<<BIT)) )

/*Get the value of a specific in in the register */
#define GET_BIT(REG,BIT)  ((REG >> BIT) & 1  )


#endif
