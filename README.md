# Experimental Results
1k Resistor in series with LED

Basic Blink 100ms sleep_ms
1.8 V -> 85mA
3.8 V -> 28mA
5 V -> 18.5mA

Basic Blink 100ms busy_wait_ms
1.8 -> 76mA
3.8 V -> 28mA
5 V -> 21mA

Blink Thread 100ms 
1.8V -> 88mA
3.8V - 29mA
5V -> 21mA

Busy Loop Full Processor utilization
1.8V -> 85mA
3.8V -> 29mA
5V -> 21mA

Interrupt Handler (1kHz)
1.8V -> 71mA
3.8V -> 24mA
5V -> 18mA




# Renode setup
The Raspberry Pico needs configuration files for Renode to work properly.

* On MacOS, the installation location is `/Applications/Renode.app/Contents/MacOs`
* On Linux, the location for Debian, Fedora, and Arch is `/opt/renode`
* On Windows, the location is `C://Program Files/Renode`

To add the Pico configuration files:
1. Copy `rp2040_spinlock.py` and `rp2040_divider.py` to the `scripts/pydev` directory of your Renode installation.
1. Copy `rpi_pico_rp2040_w.repl` to the `platforms/cpus` directory.
