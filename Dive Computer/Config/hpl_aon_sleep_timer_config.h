/* Auto-generated config file hpl_aon_sleep_timer_config.h */
#ifndef HPL_AON_SLEEP_TIMER_CONFIG_H
#define HPL_AON_SLEEP_TIMER_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>

// Enable configuration of module
#ifndef AON_SLEEP_TIMER_ENABLE
#define AON_SLEEP_TIMER_ENABLE 1
#endif

// <h> Basic Configuration

// <o> Length of one timer tick in uS <0-4294967295>
// <id> aon_sleep_timer_tick
#ifndef AON_SLEEP_TIMER_TICK
#define AON_SLEEP_TIMER_TICK 1000000
#endif

// <o> Wakeup Domain
// <i> Wakeup domain choice.
// <0x0=> Wakeup Disable
// <0x1=> Wakeup Arm
// <0x2=> Wakeup Arm And BLE
// <id> aon_sleep_timer_wakeup
#ifndef AON_SLEEP_TIMER_WAKEUP
#define AON_SLEEP_TIMER_WAKEUP 2
#endif

// </h>

// Calculate timer load value register value from requested timer tick value, value = 32K * AON_SLEEP_TIMER_TICK/1000000
#ifndef AON_SLEEP_TIMER_LOAD_VALUE
#define AON_SLEEP_TIMER_LOAD_VALUE (uint32_t)(0.032000 * AON_SLEEP_TIMER_TICK)
#endif

// <<< end of configuration section >>>

#endif // HPL_AON_SLEEP_TIMER_CONFIG_H
