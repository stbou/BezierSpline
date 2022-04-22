/**
 * \file ofApp.h
 * \author Stephane Boulanger
 * \version 0.1
 * \date 2022-04-21
 * \copyright Copyright (c) 2022
 */

#pragma once

#include "ofMain.h"

// premi�re fonction d'�valuation d'une courbe de B�zier cubique 
inline void bezier_cubic(
	float t,
	float p1x, float p1y, float p1z,
	float p2x, float p2y, float p2z,
	float p3x, float p3y, float p3z,
	float p4x, float p4y, float p4z,
	float& x, float& y, float& z)
{
	float u = 1 - t;
	float uu = u * u;
	float uuu = uu * u;
	float tt = t * t;
	float ttt = tt * t;

	x = uuu * p1x + 3 * uu * t * p2x + 3 * u * tt * p3x + ttt * p4x;
	y = uuu * p1y + 3 * uu * t * p2y + 3 * u * tt * p3y + ttt * p4y;
	z = uuu * p1z + 3 * uu * t * p2z + 3 * u * tt * p3z + ttt * p4z;
}



class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void reset();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		ofPolyline line_renderer;
		ofPolyline line_renderer_2;

		ofVec3f* selected_ctrl_point;

		ofVec3f ctrl_point1;
		ofVec3f ctrl_point2;
		ofVec3f ctrl_point3;
		ofVec3f ctrl_point4;
		ofVec3f ctrl_point5;
		ofVec3f ctrl_point6;
		ofVec3f ctrl_point7;
		ofVec3f ctrl_point8;


		ofVec3f initial_position1;
		ofVec3f initial_position2;
		ofVec3f initial_position3;
		ofVec3f initial_position4;
		ofVec3f initial_position5;

		ofVec3f initial_position6;
		ofVec3f initial_position7;
		ofVec3f initial_position8;
		ofVec3f initial_position9;
		ofVec3f initial_position10;

		ofVec3f position;
		ofVec3f position_2;

		ofVec3f tangent1;
		ofVec3f tangent2;

		float line_width_outline;
		float line_width_curve;

		float radius;
		float scale;
		float offset;

		float delta_x;
		float delta_y;

		float motion_speed;

		int framebuffer_width;
		int framebuffer_height;

		int line_resolution;

		int index;
		int index_2;

		float time_current;
		float time_last;
		float time_elapsed;

		bool is_key_press_up;
		bool is_key_press_down;
		bool is_key_press_left;
		bool is_key_press_right;

		bool same_point_4;
		bool same_point_5;

		bool hide_control_line;
		bool noeud;
		ofEasyCam cam;
		
		
};
