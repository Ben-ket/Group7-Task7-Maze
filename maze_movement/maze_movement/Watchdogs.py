import time


class Watchdog:

    def __init__(self, timeout):
        self.timeout = timeout
        self.last_feed = time.monotonic()

    def feed(self):
        self.last_feed = time.monotonic()

    def expired(self):
        return time.monotonic() - self.last_feed > self.timeout