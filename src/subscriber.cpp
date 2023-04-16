#include "publisher_subscriber_server_client/subscriber.hpp"

void callback(const publisher_subscriber_server_client::Message::ConstPtr& msg)
{
  
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "subscriber");
  ros::NodeHandle nh;

  

  return 0;
}
