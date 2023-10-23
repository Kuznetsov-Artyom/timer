# :clipboard:API:clipboard:
Macros have been predefined for ease of use:
```cpp
#define TIMER_START(varName, period) tmr::Timer<period> varName
#define TIMER_GET(varName) varName()
#define TIMER_RESET(varName) varName.reset()
```
## TIMER_START
### Description
Starts creates and starts a timer with the specified period.
### Parametrs
* `varName` (timer name)
* `period` (unit of measurement of time)

### Possible values of the `period`:
* `tmr::nanosecond_t`
* `tmr::microsecond_t`
* `tmr::millisecond_t`
* `tmr::second_t`
* `tmr::minute_t`
* `tmr::hour_t`

## TIMER_GET
### Description
Returns the amount of time that has passed since the timer was started.
### Parametrs
`varName` (timer name)
### Return type
`int64_t`
### Complexity
Constant.

## TIMER_RESET
### Description
Resets the timer.
### Parametrs
`varName` (timer name)
### Complexity
Constant.

# Link for cloning the repository:octocat:
`git clone https://github.com/Kuznetsov-Artyom/Calculator.git`





