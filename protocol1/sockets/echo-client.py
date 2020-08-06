#!/usr/bin/env python3

import socket

#HOST = 'www.cs.columbia.edu/~hastings/'  # The server's hostname or IP address
HOST = '127.0.0.1'
PORT = 65432        # The port used by the server

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.connect((HOST, PORT))
    s.sendall(b'Hello, world')
    data = s.recv(1024)

print('Received', repr(data))
