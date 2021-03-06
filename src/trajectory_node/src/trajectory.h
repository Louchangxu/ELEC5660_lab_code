#ifndef TRAJECTORY_H
#define TRAJECTORY_H

#include <Eigen/Eigen>
#include <stdio.h>

using namespace std;
using namespace Eigen;

const double path[27] = { 0.0, 0.0, 0.5, \
                          0.0, 0.5, 0.5, \
                          0.5, 0.5, 0.5, \
                          1.0, 0.5, 0.5, \
                          1.5, 0.0, 0.5, \
                          1.5, -0.5, 0.5,\
                          0.5, -0.5, 0.5,\
                          0.5, -0.5, 0.5,\
                          0.0, 0,0, 0.5  };

MatrixXd p(64,3);

p <<    -0.000000000000002,   0.000000000000010,   0.500000000000000,
        -0.000000000000004,   0.000000000000019,   0.000000000000001,
        -0.000000000000002,   0.000000000000010,  -0.000000000000000,
        -0.000000000000000,   0.000000000000001,   0.000000000000000,
        -0.003041476041360,   0.018506996827531,  -0.000000000000599,
         0.001564699430775,  -0.005677682256661,   0.000000000000472,
        -0.000210067843243,   0.000496413908114,  -0.000000000000125,
         0.000006659575050,  -0.000012096367719,   0.000000000000011,
        -0.000000000000084,   0.499999999999029,   0.500000000000000,
         0.042617811993641,   0.360622911074983,   0.000000000002034,
         0.040471292749328,  -0.013875949890929,   0.000000000000769,
         0.008797721805995,  -0.060512676322679,  -0.000000000000021,
        -0.001370432416889,  -0.003185490712631,  -0.000000000002700,
        -0.001340196865630,   0.006831448564275,   0.000000000002180,
         0.000281807340793,  -0.001045474095103,  -0.000000000000627,
        -0.000010047619377,   0.000033258997392,   0.000000000000062,
         0.499999999999484,   0.500000000000778,   0.500000000000000,
         0.185372139546571,  -0.282928793094812,  -0.000000000005042,
        -0.026098732909303,   0.029548852498826,  -0.000000000005206,
        -0.000747280680039,   0.039709471732202,   0.000000000001314,
         0.002437608559747,   0.002447292132200,   0.000000000009316,
         0.000259338546057,  -0.004961872347499,  -0.000000000007116,
        -0.000137565371960,   0.000749481190644,   0.000000000001897,
         0.000005754588963,  -0.000023672129346,  -0.000000000000175,
         0.999999999999451,   0.499999999999475,   0.500000000000000,
         0.213113560533662,   0.183703655363018,  -0.000000000000968,
         0.028094161815404,  -0.045032383912451,   0.000000000002307,
        -0.009706370583723,  -0.035824463480250,  -0.000000000002203,
        -0.002823070555841,  -0.003725412357123,  -0.000000000006399,
         0.000248140964081,   0.004482048119143,   0.000000000006218,
         0.000066086975716,  -0.000618351689386,  -0.000000000001857,
        -0.000003571034154,   0.000018686468059,   0.000000000000184,
         1.499999999999997,   0.000000000000021,   0.500000000000000,
        -0.027062298335253,  -0.448725812141273,   0.000000000008919,
        -0.080401836469118,   0.001029770534961,  -0.000000000003467,
         0.007654439933970,   0.040268790180293,   0.000000000004167,
         0.002113113691956,   0.004991688491202,  -0.000000000007879,
        -0.000007282930564,  -0.004225299521511,   0.000000000004650,
        -0.000079275780663,   0.000526362267329,  -0.000000000001103,
         0.000003651917546,  -0.000015020128718,   0.000000000000093,
         1.000000000000009,  -0.500000000000007,   0.500000000000000,
        -0.168795279129345,   0.175306108024505,   0.000000000000834,
         0.022401786424728,   0.040536315875478,  -0.000000000001033,
        -0.002839369309205,  -0.038831066227598,  -0.000000000002150,
        -0.002002894380726,  -0.005889033578182,   0.000000000014980,
         0.000163480610028,   0.003992355049755,  -0.000000000011409,
         0.000048486190259,  -0.000453460278127,   0.000000000003088,
        -0.000002576270026,   0.000012184419556,  -0.000000000000286,
         0.500000000000009,  -0.499999999999989,   0.500000000000000,
        -0.208604379787030,  -0.255560532874890,  -0.000000000020593,
        -0.018447573334211,  -0.022619511092015,   0.000000000004505,
         0.009083747292533,   0.041334135555119,   0.000000000002226,
         0.002456068285978,   0.007268356433657,   0.000000000002987,
        -0.000676654088674,  -0.004600833942934,  -0.000000000002720,
         0.000022600906609,   0.000510535303602,   0.000000000000702,
         0.000000414988868,  -0.000013530712860,  -0.000000000000061,
         0.000000000000004,  -0.500000000000014,   0.500000000000000,
        -0.037498103896679,   0.332128538029603,   0.000000000002047,
         0.039052427484552,   0.032349986554368,  -0.000000000003607,
        -0.011115226529906,  -0.050669205179937,   0.000000000000605,
        -0.001187438416173,  -0.002432762284438,   0.000000000001578,
         0.001070378390097,   0.005859019377539,  -0.000000000001026,
        -0.000155901480190,  -0.000985719024306,   0.000000000000241,
         0.000004968386502,   0.000033118230172,  -0.000000000000020;

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
    double max_run_time = 25.0; // set your trajectory max run time.
    double end_position[3];     // set your trajectory end point.

    end_position[0] = 0.0;
    end_position[1] = 0.0;
    end_position[2] = 0.5;


    const int T = 3.125;
    double segment = dT / T;
    for (size_t i = 0; i < 8; i++) {
      if (segment >= i && segment <= (i+1)) {
        segment = i;
        break;
      }
    }

    for (size_t i = 0; i < 3; i++) {
      for (size_t j = 0; j < 8; j++) {
        desired_p[i] = desired_p[i]+p(8*segment+1+j,i)*pow(dT,j);
      }
      for (size_t j = 0; j < 7; j++) {
        desired_v[i] = desired_v[i]+p(8*segment+2+j,i)*(j+1)*pow(dT,j);
      }
      desired_a[i] = 0;
    }

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
