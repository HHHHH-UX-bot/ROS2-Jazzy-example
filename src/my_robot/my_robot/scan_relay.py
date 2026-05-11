#!/usr/bin/env python3
"""Relay /lidar/scan to /scan, replacing frame_id with a simple name."""
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan

class ScanRelay(Node):
    def __init__(self):
        super().__init__('scan_relay')
        self.pub = self.create_publisher(LaserScan, '/scan', 10)
        self.sub = self.create_subscription(LaserScan, '/lidar/scan', self.cb, 10)

    def cb(self, msg):
        msg.header.frame_id = 'my_robot/rplidar'
        self.pub.publish(msg)

def main():
    rclpy.init()
    node = ScanRelay()
    rclpy.spin(node)

if __name__ == '__main__':
    main()
