struct number {
	int num;
};

program FIBONACCI {
	version FIBONACCI_V1 {
		int FIB(number) = 1;
	} = 1;
} = 0x200000f;
