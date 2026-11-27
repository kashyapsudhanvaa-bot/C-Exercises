/* // Worked Example
#include <stdio.h>

typedef struct {

    char unit;
    int value;
    int timestamp;
    int channel;
} sensor_reading_t;

void update_reading(sensor_reading_t *r, int new_value, int new_time) {
    r->value = new_value;
    r->timestamp = new_time;
}

int main(void) {
    sensor_reading_t s = {0, 'C', 0, 2};

    update_reading(&s, 312, 1000);
    printf("Reading 1: %d%c ch%d at %dms\n", s.value, s.unit, s.channel ,s.timestamp);

    update_reading(&s, 298, 2000);
    printf("Reading 2: %d%c ch %d at %dms\n", s.value, s.unit, s.channel ,s.timestamp);
    printf("%zu",sizeof(sensor_reading_t));
    return 0;
}
*/

#include <stdio.h>

typedef struct {
    unsigned int raw_value;   /* ADC reading, 0–4095 */
    unsigned int channel;     /* ADC channel, 0–15 */
    unsigned int status;      /* 0=OK 1=overrange 2=fault */
} adc_reading_t;

int main(void) {
    adc_reading_t reading;
    adc_reading_t *p = &reading;

    p->raw_value = 2048;
    p->channel = 3;
    p->status = 0;

    printf("raw_value = %u\n", p->raw_value);
    printf("channel = %u\n", p->channel);
    printf("status = %u\n", p->status);

    return 0;
}
