#include "publisher_subscriber_server_client/publisher_client.hpp"

int main(int argc, char** argv) 
{
    ros::init(argc, argv, "publisher_client");
    ros::NodeHandle nh;

    ros::ServiceClient client = nh.serviceClient<publisher_subscriber_server_client::Service>("nama_server");
    ros::Publisher chatter_pub = n.advertise<std_msgs::String>("nama_topic", 1000);

    publisher_subscriber_server_client::Service srv;
    srv.request.A = atoll(argv[1]);
    srv.request.B = atoll(argv[2]);

    ros::Rate loop_rate(10);

    ros::Rate loop_rate(10);

    if (client.call(srv)){
        while (ros::ok()){
            std_msgs::String msg;
            msg.pesan = srv.response.Number;
            chatter_pub.publish(msg);

            ros::spinOnce();
            loop_rate.sleep();
        }
    }
    else{
        ROS_ERROR("Failed");
        return 1;
    }
    return 0;
}

