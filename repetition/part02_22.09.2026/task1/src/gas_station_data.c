#include <stdio.h>
#include "gas_station_data.h"

float gas_station_data() {
	float gas_value = 1;
	float road_value = 1;
	float gas_road_result = 0;
	unsigned int counter = 0;

	while (1) {
		printf("%s", "Enter gas (-1 to exit): ");
		while (2) {
			if (scanf("%f", &gas_value) != 1) {
				puts("Please, enter correct data!");

				int c;
				while ((c = getchar()) != '\n' && c != EOF) {}
			} else {
				break;
			}
		}
		
		if (gas_value == -1) {
			break;
		}

		printf("%s", "Enter road: ");
		while (2) {

			if (scanf("%f", &road_value) != 1) {
				puts("Please, enter correct data!");

				int c;
				while ((c = getchar()) != '\n' && c != EOF) {}
			} else {
				break;
			}
		}

		printf("%s%.6f%s", "For this gas station, gas/road ",
		gas_value/road_value, "\n\n");

		gas_road_result += gas_value/road_value;
		counter++;

	}
	
	puts("End entered!");
	return gas_road_result/counter;
	
}
