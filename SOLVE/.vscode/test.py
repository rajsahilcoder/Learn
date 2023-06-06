import random
import string
import paho.mqtt.client as mqtt

# Constants
USERNAME = "web_em4"
PASSWORD = "web_em4_password"
HOSTNAME = "smart-iiot.online"
PORT = 9002
TOPICS = ["em1/esp8266", "em4/esp32"]

def on_connect(client, userdata, flags, rc):
    if rc == 0:
        print("Connected successfully.")
    else:
        print("Connect failed. rc= "+str(rc))
    for topic in TOPICS:
        client.subscribe(topic)

def on_message(client, userdata, message):
    print("Received message: ", str(message.payload.decode("utf-8")), "on topic: ", message.topic)

def on_disconnect(client, userdata, rc):
    if rc != 0:
        print("Unexpected disconnection.")

# Generating random client_id
def makeid(size):
    return ''.join(random.choice(string.ascii_letters + string.digits) for _ in range(size))

client_id = "client_id-" + makeid(7)

# Create a new MQTT client
client = mqtt.Client(client_id)

# Assign event callbacks
client.on_connect = on_connect
client.on_message = on_message
client.on_disconnect = on_disconnect

client.username_pw_set(USERNAME, password=PASSWORD)

# Connect
client.connect(HOSTNAME, port=PORT, keepalive=60)

# Blocking call that processes network traffic, dispatches callbacks and handles reconnecting.
client.loop_forever()
