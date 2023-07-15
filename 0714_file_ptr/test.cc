#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <memory.h>

int main() {
    FILE * pf = fopen("zhu.txt", "r");
	if(pf == NULL) {
		printf("%s\n", strerror(errno));
	}
    std::cout << "open success" << std::endl;
    int count = 0;
    while (1) {
        char c = fgetc(pf);
        count++;
        std::cout << c << " ";
        int pos;
        if (c == 'z') {
            pos = ftell(pf);
            // std::cout << pos << std::endl;
            fseek(pf, pos-1, SEEK_SET);
        }
        // if (c == 'u') {
        //     fseek(pf, pos-1, SEEK_SET);
        // }
        if (count == 30) break;
    }
    
	fclose(pf);
	pf = NULL;
    return 0;
}
