#include "publisher_subscriber_server_client/server.hpp"

bool process(publisher_subscriber_server_client::Service::Request  &req,
             publisher_subscriber_server_client::Service::Response &res)
{
    res.Number = req A + req B;
    ROS_INFO("request: x=%ld, y=%ld", (long int)req.A, (long int)req.B);
    ROS_INFO("sending back response: [%ld]", (long int)res.Number);
    return true;
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "server");
    ros::NodeHandle nh;

    ros::ServiceServer service = nh.advertiseService("nama_server", process);
    ROS_INFO("Ready to add two ints.");
    ros::spin();

    return 0;
}
