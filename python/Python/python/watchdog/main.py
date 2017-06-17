from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler
import time
import os

class Handler(FileSystemEventHandler):
    def on_created(self, event):
        print event

    def on_deleted(self, event):
        print event

    def on_moved(self, event):
        print event



path = os.getcwd()+"/tmp"

observer = Observer()
observer.schedule(Handler(), path=path, recursive=True)
observer.start()

try:
    while True:
        time.sleep(0.1)
except KeyboardInterrupt:
    observer.stop()
observer.join()