#include "LogUtils.h"

int main(){
    LogUtils log;
    log.log_in(2);
    log.log_pause();
    log.log_in(3);
    log.log_end();
    log.log_close();
}
