#ifndef sendpackage_h
#define sendpackage_h
#define NODE_NAME "node1"
#if defined(ARDUINO) && (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

#define SENDPACKAGE_VERSION "0.0.1"

class spackage
{
		public:
				int write(int *);
				int write(float *);
				int write(char *);
				int init(String);
				int send();
		private:
				String p_name;
				String p_type;
				int i_data;
				char c_data;
				float f_data;
};
#endif
