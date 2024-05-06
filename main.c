#include <stdbool.h>
#include <stdlib.h>

typedef struct {
  int IsOutofBand;
} SystemConfig;

int main() {
  SystemConfig *system_config = NULL;

  //if (system_config != NULL) {
    return system_config->IsOutofBand;
  //}
}
