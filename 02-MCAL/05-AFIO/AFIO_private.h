typedef{
	volatile u32 EVCR;
	volatile u32 MAPR;
	volatile u32 EXTICR [4];
	volatile u32 MAPR2;
}AFIO_t;

#define AFIO	((AFIO_t*)0x40010000)