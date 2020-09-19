#include "config.hpp"

Config::Config()
{
	////////////////////////////////////////
	////////////////////////////////////////
	//		LABELS AND COLORS SETTINGS	  //			
	////////////////////////////////////////
	////////////////////////////////////////

	// Colors for texts and tags in labels
	labelColor = cv::Scalar(250, 250, 250);
	// Font size of texts and tags
	fontSize = 0.64;
	// Output window width and height
	// NOTE: COMMENT THESE AND CORRESPONDING LINES IN MAIN IF YOU'RE GONNA .....
	// ..... IMPLEMENT THE CODE ON RASPBERRY PI (OR IT WILL MESS UP CAMERA OUTPUT)
	outputWindowWidth = 1000;
	outputWindowHeight = 600;
	// Output window width and height
	font = cv::FONT_HERSHEY_SIMPLEX;
	boxThickness = 2;
	labelThickness = 2;
	// model = ssd_mobilenet_v3
	// model = mask_rcnn_inception


	////////////////////////////////////////
	////////////////////////////////////////
	//			CAMERA SETTINGS			  //			
	////////////////////////////////////////
	////////////////////////////////////////

	modelConfiguration = "models/ssd_mobilenet_v3/model_configurations.pbtxt";
	modelWeights = "models/ssd_mobilenet_v3/frozen_graph.pb";
	modelSize = 320;
	outputWindowWidth = 1000;
	outputWindowHeight = 600;
	trackerType = "MOSSE";
	detectionRate = 5;
	// trackerType = "KCF";

	////////////////////////////////////////
	////////////////////////////////////////
	//		ALGORITHMS SETTINGS			  //			
	////////////////////////////////////////
	////////////////////////////////////////



	////////////////////////////////////////
	////////////////////////////////////////
	//		ADJUSTABLE THRESHOLDS 		  //			
	////////////////////////////////////////
	////////////////////////////////////////

	confidenceThreshold = 0.5;
	intersectionThreshold = 0.5;
	trackerMergeThreshold = 0.7;

	////////////////////////////////////////
	////////////////////////////////////////
	//	  DETECTION CLASSES SETTINGS 	  //			
	////////////////////////////////////////
	////////////////////////////////////////

	// NOTE: DONT CHANGE INDEX-CLASS CORRESPONDANCES OR YOULL PREDICT CAT FOR AN AIRPLANE

	// Person class detection index and color
	classes.push_back("person");
	indices.push_back(1);
	colors.push_back(cv::Scalar(0, 211, 255));

	// Bicycle class detection index and color
	classes.push_back("bicycle");
	indices.push_back(2);
	colors.push_back(cv::Scalar(255, 0, 255));

	// Car class detection index and color
	classes.push_back("car");
	indices.push_back(3);
	colors.push_back(cv::Scalar(0, 0, 255));

	classes.push_back("motorcycle");
	indices.push_back(4);
	colors.push_back(cv::Scalar(255, 0, 255));

	classes.push_back("bus");
	indices.push_back(6);
	colors.push_back(cv::Scalar(255, 211, 0));

	classes.push_back("truck");
	indices.push_back(8);
	colors.push_back(cv::Scalar(0, 0, 255));
}