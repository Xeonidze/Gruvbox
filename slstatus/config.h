/* See LICENSE file for copyright and license details. */

/* interval between updates (in seconds) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 1024

/*
 * function            format          argument
 * * cpu_perc            ЦП в %          NULL
 * ram_perc            ОЗУ в %         NULL
 * disk_perc           Диск в %        Точка монтирования ("/")
 * keymap              Раскладка       NULL
 * datetime            Время           Формат даты
 */
static const struct arg args[] = {
    /* function   format                                                                         argument */
    
    /* CPU (Фон панели -> Красная стрелка -> Красный фон, темный текст) */
    { cpu_perc,   "^c#fb4934^^b#282828^^b#fb4934^^c#282828^ CPU %3s%% ",                        NULL },

    /* RAM (Красный фон -> Зеленая стрелка -> Зеленый фон, темный текст) */
    { ram_perc,   "^c#b8bb26^^b#fb4934^^b#b8bb26^^c#282828^ RAM %3s%% ",                        NULL },

    /* SSD (Зеленый фон -> Желтая стрелка -> Желтый фон, темный текст) */
    { disk_perc,  "^c#fabd2f^^b#b8bb26^^b#fabd2f^^c#282828^ SSD %3s%% ",                        "/" },

    /* VOL (Желтый фон -> Синяя стрелка -> Синий фон, темный текст) */
    { vol_perc,   "^c#83a598^^b#fabd2f^^b#83a598^^c#282828^ VOL %3s%% ",                        "Master" },

    /* Раскладка (Синий фон -> Фиолетовая стрелка -> Фиолетовый фон, темный текст) */
    { keymap,     "^c#b16286^^b#83a598^^b#b16286^^c#282828^ %s ",                               NULL },

    /* Время (Фиолетовый фон -> Бирюзовая стрелка -> Бирюзовый фон, темный текст) */
    { datetime,   "^c#8ec07c^^b#b16286^^b#8ec07c^^c#282828^ %s ^d^",                            "%F %T" },
};
