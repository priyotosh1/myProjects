TO use very big numbers in c++ :

1) install "libgmp-dev" module from apt-get

2) include gmp.h or gmpxx.h depending upon the requirements

3) if including gmp.h, compile by g++ <file> -lgmp

4) if includeing gmpxx.h, compile by g++ <file> -lgmpxx -lgmp

Note : lgmp or lgmpxx should be at the last. It gives error of you put it 
	before the file name. 

