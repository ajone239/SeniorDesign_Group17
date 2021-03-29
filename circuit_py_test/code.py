import time
import board
from digitalio import DigitalInOut, Direction, Pull

led = DigitalInOut(board.P0_15)
led.direction = Direction.OUTPUT

while True:
    led.value = False
    time.sleep(0.5)
    led.value = True
    time.sleep(0.5)
