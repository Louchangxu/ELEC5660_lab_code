#ifndef TRAJECTORY_H
#define TRAJECTORY_H

#include <Eigen/Eigen>
#include <stdio.h>

/*
 * this function is to get desired states for specific trajectory, just generated, at time dt.
 * input:
 * dT   -> the time
 * hover_pos -> the desired position where you want quadrotor to hover
 * now_vel -> maybe useless
 *
 * output:
 * desired_pos -> desired position at dT
 * desired_vel -> desired velocity at dT
 * desired_acc -> desired acceleration at dT
 * return:
 * true  -> you have alread configured desired states
 * false -> no desired state
 */
bool
trajectory_control( const double dT,
                    const Eigen::Vector3d hover_pos,
                    const Eigen::Vector3d now_vel,
                    double& end_time,
                    Eigen::Vector3d& desired_pos,
                    Eigen::Vector3d& desired_vel,
                    Eigen::Vector3d& desired_acc )
{
    // if you don't want to use Eigen, then you can use these arrays
    // or you can delete them and use Eigen
    double hover_p[3], now_v[3];
    double desired_p[3], desired_v[3], desired_a[3];
    hover_p[0] = hover_pos.x( );
    hover_p[1] = hover_pos.y( );
    hover_p[2] = hover_pos.z( );
    now_v[0]   = now_vel.x( );
    now_v[1]   = now_vel.y( );
    now_v[2]   = now_vel.z( );
    // your code // please use coefficients from matlab to get desired states

    printf( "x = %.2f, y = %.2f, z = %.2f\n", desired_p[0], desired_p[1], desired_p[2] );

    /*---------------------------------------------------------------------------------*/
    /*--- YOUR CODE FROM HERE --- YOUR CODE FROM HERE --- YOUR CODE FROM HERE ---------*/
    /*---------------------------------------------------------------------------------*/
    //	printf("dt= %.2f\n",dT);
    double max_run_time = 10.0; // set your trajectory max run time.
    double end_position[3];     // set your trajectory end point.
    
    end_position[0] = 0.0;
    end_position[1] = 0.0;
    end_position[2] = 0.5;
  
    const double path[27] = { 0.0, 0.0, 0.5, \
                              0.0, 0.5, 0.5, \
                              0.5, 0.5, 0.5, \
                              1.0, 0.5, 0.5, \
                              1.5, 0.0, 0.5, \
                              1.5, -0.5, 0.5,\
                              0.5, -0.5, 0.5,\
                              0.5, -0.5, 0.5,\
                              0.0, 0,0, 0.5  };
    
  
  /*
   -0.0000    0.0000    0.5000
   -0.0000    0.0000    0.0000
   -0.0000    0.0000   -0.0000
   -0.0000    0.0000    0.0000
   -0.0030    0.0185   -0.0000
    0.0016   -0.0057    0.0000
   -0.0002    0.0005   -0.0000
    0.0000   -0.0000    0.0000
   -0.0000    0.5000    0.5000
    0.0426    0.3606    0.0000
    0.0405   -0.0139    0.0000
    0.0088   -0.0605   -0.0000
   -0.0014   -0.0032   -0.0000
   -0.0013    0.0068    0.0000
    0.0003   -0.0010   -0.0000
   -0.0000    0.0000    0.0000
    0.5000    0.5000    0.5000
    0.1854   -0.2829   -0.0000
   -0.0261    0.0295   -0.0000
   -0.0007    0.0397    0.0000
    0.0024    0.0024    0.0000
    0.0003   -0.0050   -0.0000
   -0.0001    0.0007    0.0000
    0.0000   -0.0000   -0.0000
    1.0000    0.5000    0.5000
    0.2131    0.1837   -0.0000
    0.0281   -0.0450    0.0000
   -0.0097   -0.0358   -0.0000
   -0.0028   -0.0037   -0.0000
    0.0002    0.0045    0.0000
    0.0001   -0.0006   -0.0000
   -0.0000    0.0000    0.0000
    1.5000    0.0000    0.5000
   -0.0271   -0.4487    0.0000
   -0.0804    0.0010   -0.0000
    0.0077    0.0403    0.0000
    0.0021    0.0050   -0.0000
   -0.0000   -0.0042    0.0000
   -0.0001    0.0005   -0.0000
    0.0000   -0.0000    0.0000
    1.0000   -0.5000    0.5000
   -0.1688    0.1753    0.0000
    0.0224    0.0405   -0.0000
   -0.0028   -0.0388   -0.0000
   -0.0020   -0.0059    0.0000
    0.0002    0.0040   -0.0000
    0.0000   -0.0005    0.0000
   -0.0000    0.0000   -0.0000
    0.5000   -0.5000    0.5000
   -0.2086   -0.2556   -0.0000
   -0.0184   -0.0226    0.0000
    0.0091    0.0413    0.0000
    0.0025    0.0073    0.0000
   -0.0007   -0.0046   -0.0000
    0.0000    0.0005    0.0000
    0.0000   -0.0000   -0.0000
    0.0000   -0.5000    0.5000
   -0.0375    0.3321    0.0000
    0.0391    0.0323   -0.0000
   -0.0111   -0.0507    0.0000
   -0.0012   -0.0024    0.0000
    0.0011    0.0059   -0.0000
   -0.0002   -0.0010    0.0000
    0.0000    0.0000   -0.0000
  
  
  */
    



    /*---------------------------------------------------------------------------------*/
    /*---- YOUR CODE END HERE ---- YOUR CODE END HERE ---- YOUR CODE END HERE ---------*/
    /*---------------------------------------------------------------------------------*/
    if ( dT < max_run_time )
    {
        // output trajectory
        desired_pos.x( ) = desired_p[0];
        desired_pos.y( ) = desired_p[1];
        desired_pos.z( ) = desired_p[2];
        desired_vel.x( ) = desired_v[0];
        desired_vel.y( ) = desired_v[1];
        desired_vel.z( ) = desired_v[2];
        desired_acc.x( ) = desired_a[0];
        desired_acc.y( ) = desired_a[1];
        desired_acc.z( ) = desired_a[2];
        end_time         = max_run_time;
        return true; // if you have got desired states, true.
    }
    else
    {
        // output end point trajectory
        desired_pos.x( ) = end_position[0];
        desired_pos.y( ) = end_position[1];
        desired_pos.z( ) = end_position[2];
        desired_vel.x( ) = 0.0;
        desired_vel.y( ) = 0.0;
        desired_vel.z( ) = 0.0;
        desired_acc.x( ) = 0.0;
        desired_acc.y( ) = 0.0;
        desired_acc.z( ) = 0.0;
        return false; // if you have got desired states, true.
    }
}

#endif // TRAJECTORY_H
