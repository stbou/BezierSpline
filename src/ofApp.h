#pragma once

#include "ofMain.h"

inline void bezier_quadratic(
	float t,
	float p1x, float p1y, float p1z,
	float p2x, float p2y, float p2z,
	float p3x, float p3y, float p3z,
	float& x, float& y, float& z)
{
	float u = 1 - t;

	x = u * (u * p1x + t * p2x) + t * (u * p2x + t * p3x);
	y = u * (u * p1y + t * p2y) + t * (u * p2y + t * p3y);
	z = u * (u * p1z + t * p2z) + t * (u * p2z + t * p3z);

	
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


		float time_current;
		float time_last;
		float time_elapsed;

		bool is_key_press_up;
		bool is_key_press_down;
		bool is_key_press_left;
		bool is_key_press_right;

		ofEasyCam cam; 

		ofPolyline line_renderer;

		ofVec3f* selected_ctrl_point;

		ofVec3f ctrl_point1;
		ofVec3f ctrl_point2;
		ofVec3f ctrl_point3;
		ofVec3f ctrl_point4;
		ofVec3f ctrl_point5;
		ofVec3f ctrl_point6;

		ofVec3f initial_position1;
		ofVec3f initial_position2;
		ofVec3f initial_position3;
		ofVec3f initial_position4;
		ofVec3f initial_position5;

		ofVec3f position;

		std::vector<std::vector<float>> banque_point;

		std::vector<float> positionX;
		std::vector<float> positionY;
		std::vector<float> positionZ;
		

		float line_width_outline;
		float line_width_curve;

		float radius;
		float scale;
		float smooth;
		float offset;

		float delta_x;
		float delta_y;

		float motion_speed;

		int framebuffer_width;
		int framebuffer_height;

		int line_resolution;

		int index;
		
};
