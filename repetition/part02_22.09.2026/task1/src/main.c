#include <stdio.h>
#include "gas_station_data.h"
#include "result_gas_station_data.h"

int main() {
	float result_data = gas_station_data();
	print_result_gas_station_data(result_data);
	
	return 0;
}
