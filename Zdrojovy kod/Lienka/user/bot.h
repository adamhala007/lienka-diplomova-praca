#ifndef HAVE_BEEBOT_USER_BOT_H
#define HAVE_BEEBOT_USER_BOT_H 1

#include "os_type.h"
#include "perform.h"

enum InputMode {
    NormalInputMode,
    MusicBoxInputMode,
};

#define BOT_PROGRAM_SIZE 50
typedef struct _Bot {
    uint8 program[BOT_PROGRAM_SIZE];
    int length;
    int pc;
    Perform p;
    enum InputMode inputMode;
    os_timer_t adcCheckTimer;
    int currentSong;
    int x, y, dir;
} Bot;

void bot_init(Bot* bot);

#endif //HAVE_BEEBOT_USER_BOT_H
/* vim: set sw=4 sts=4 ts=4 et : */
