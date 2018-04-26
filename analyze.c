/*
 * analyze.c
 *
 * Created: 3/7/2018 1:47:44 PM
 *  Author: hpan5
 */ 
#include "analyze.h"

float pitch_est(AxesSI_t Axes){
	float pitch;
	/*Apply trigonometry to get the pic*/
	pitch = (atan(Axes.yAxis/sqrt(pow(Axes.zAxis,2)+pow(Axes.xAxis,2))))*(180.0/PI);
	return pitch;
}

float roll_est(AxesSI_t Axes){
	float roll;
	/*Apply trigonometry to get the pic*/
	roll = (atan(-Axes.xAxis/Axes.zAxis))*(180.0/PI);
	return roll;
}
/*
float yaw_est(AxesSI_t Axes){
	float yaw;
	yaw = (atan(Axes.zAxis/sqrt(pow(Axes.xAxis,2)+pow(Axes.yAxis,2))))*(180.0/PI);
	return yaw;
}
*/