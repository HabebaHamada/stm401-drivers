/*************************************************************/
/*************       Author: Habeba Hamada    ****************/
/*************       LAYER: MCAL               ****************/
/*************       Component: EXTI            ****************/
/*************       Version: 1.00            ****************/
/*************************************************************/

#ifndef EXTI_REGISTER_H_
#define EXTI_REGISTER_H_

#define EXTI_BASE_ADD     (u32)(0x40013C00)

typedef struct{

	volatile u32 IMR;
	volatile u32 EMR;
	volatile u32 RTSR;
	volatile u32 FTSR;
	volatile u32 SWIER;
	volatile u32 PR;

}EXTI_t;

#define EXTI		((volatile EXTI_t*)EXTI_BASE_ADD)

#define EXTI_IMR_MR0    0
#define EXTI_IMR_MR1    1
#define EXTI_IMR_MR2    2
#define EXTI_IMR_MR3    3
#define EXTI_IMR_MR4    4
#define EXTI_IMR_MR5    5
#define EXTI_IMR_MR6    6
#define EXTI_IMR_MR7    7
#define EXTI_IMR_MR8    8
#define EXTI_IMR_MR9    9
#define EXTI_IMR_MR10   10
#define EXTI_IMR_MR11   11
#define EXTI_IMR_MR12   12
#define EXTI_IMR_MR13   13
#define EXTI_IMR_MR14   14
#define EXTI_IMR_MR15   15
#define EXTI_IMR_MR16   16
#define EXTI_IMR_MR17   17
#define EXTI_IMR_MR18   18
#define EXTI_IMR_MR21   21
#define EXTI_IMR_MR22   22



#define EXTI_EMR_MR0    0
#define EXTI_EMR_MR1    1
#define EXTI_EMR_MR2    2
#define EXTI_EMR_MR3    3
#define EXTI_EMR_MR4    4
#define EXTI_EMR_MR5    5
#define EXTI_EMR_MR6    6
#define EXTI_EMR_MR7    7
#define EXTI_EMR_MR8    8
#define EXTI_EMR_MR9    9
#define EXTI_EMR_MR10   10
#define EXTI_EMR_MR11   11
#define EXTI_EMR_MR12   12
#define EXTI_EMR_MR13   13
#define EXTI_EMR_MR14   14
#define EXTI_EMR_MR15   15
#define EXTI_EMR_MR16   16
#define EXTI_EMR_MR17   17
#define EXTI_EMR_MR18   18
#define EXTI_EMR_MR21   21
#define EXTI_EMR_MR22   22



#define EXTI_RTSR_TR0    0
#define EXTI_RTSR_TR1    1
#define EXTI_RTSR_TR2    2
#define EXTI_RTSR_TR3    3
#define EXTI_RTSR_TR4    4
#define EXTI_RTSR_TR5    5
#define EXTI_RTSR_TR6    6
#define EXTI_RTSR_TR7    7
#define EXTI_RTSR_TR8    8
#define EXTI_RTSR_TR9    9
#define EXTI_RTSR_TR10   10
#define EXTI_RTSR_TR11   11
#define EXTI_RTSR_TR12   12
#define EXTI_RTSR_TR13   13
#define EXTI_RTSR_TR14   14
#define EXTI_RTSR_TR15   15
#define EXTI_RTSR_TR16   16
#define EXTI_RTSR_TR17   17
#define EXTI_RTSR_TR18   18
#define EXTI_RTSR_TR21   21
#define EXTI_RTSR_TR22   22



#define EXTI_FTSR_TR0    0
#define EXTI_FTSR_TR1    1
#define EXTI_FTSR_TR2    2
#define EXTI_FTSR_TR3    3
#define EXTI_FTSR_TR4    4
#define EXTI_FTSR_TR5    5
#define EXTI_FTSR_TR6    6
#define EXTI_FTSR_TR7    7
#define EXTI_FTSR_TR8    8
#define EXTI_FTSR_TR9    9
#define EXTI_FTSR_TR10   10
#define EXTI_FTSR_TR11   11
#define EXTI_FTSR_TR12   12
#define EXTI_FTSR_TR13   13
#define EXTI_FTSR_TR14   14
#define EXTI_FTSR_TR15   15
#define EXTI_FTSR_TR16   16
#define EXTI_FTSR_TR17   17
#define EXTI_FTSR_TR18   18
#define EXTI_FTSR_TR21   21
#define EXTI_FTSR_TR22   22



#define EXTI_SWIER_SWIER0    0
#define EXTI_SWIER_SWIER1    1
#define EXTI_SWIER_SWIER2    2
#define EXTI_SWIER_SWIER3    3
#define EXTI_SWIER_SWIER4    4
#define EXTI_SWIER_SWIER5    5
#define EXTI_SWIER_SWIER6    6
#define EXTI_SWIER_SWIER7    7
#define EXTI_SWIER_SWIER8    8
#define EXTI_SWIER_SWIER9    9
#define EXTI_SWIER_SWIER10   10
#define EXTI_SWIER_SWIER11   11
#define EXTI_SWIER_SWIER12   12
#define EXTI_SWIER_SWIER13   13
#define EXTI_SWIER_SWIER14   14
#define EXTI_SWIER_SWIER15   15
#define EXTI_SWIER_SWIER16   16
#define EXTI_SWIER_SWIER17   17
#define EXTI_SWIER_SWIER18   18
#define EXTI_SWIER_SWIER21   21
#define EXTI_SWIER_SWIER22   22


			 
#define EXTI_PR_PR0    0
#define EXTI_PR_PR1    1
#define EXTI_PR_PR2    2
#define EXTI_PR_PR3    3
#define EXTI_PR_PR4    4
#define EXTI_PR_PR5    5
#define EXTI_PR_PR6    6
#define EXTI_PR_PR7    7
#define EXTI_PR_PR8    8
#define EXTI_PR_PR9    9
#define EXTI_PR_PR10   10
#define EXTI_PR_PR11   11
#define EXTI_PR_PR12   12
#define EXTI_PR_PR13   13
#define EXTI_PR_PR14   14
#define EXTI_PR_PR15   15
#define EXTI_PR_PR16   16
#define EXTI_PR_PR17   17
#define EXTI_PR_PR18   18
#define EXTI_PR_PR21   21
#define EXTI_PR_PR22   22





*/



#endif