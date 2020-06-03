#include <gazebo/gazebo.hh>

namespace gazebo
 { 
  class WorldPluginMyrobot : public WorldPlugin
    {
     public:WorldPluginMyrobot() : WorldPlugin()
      {
          printf("welcome to Robin's World \n");
       }
     public : void Load( physics:: WorldPtr _world,sdf:: ElementPtr _sdf)
       {
        }
      };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyrobot)
 }
