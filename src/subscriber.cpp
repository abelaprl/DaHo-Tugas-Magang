#include "publisher_subscriber_server_client/subscriber.hpp"

void callback(const publisher_subscriber_server_client::Message::ConstPtr& msg)
{
  ROS_INFO('Hasil penjumlahan: [%s]', msg->pesan.c_str())
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "subscriber");
  ros::NodeHandle nh;

  ros::Subscriber sub = n.subscribe("nama_topic", 1000, callback);
  ros::spin();

  return 0;
}
