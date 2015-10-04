/**
 * @file color.h
 * 
 * @brief The Color header file.
 * 
 * @section license License
 * This file is part of RT2D, a 2D OpenGL framework.
 * 
 * - Copyright 2015 Rik Teerling <rik@onandoffables.com>
 *   - Initial commit
 * - Copyright [year] [your name] <you@yourhost.com>
 *   - [description]
 */

#ifndef COLOR_H_
#define COLOR_H_

/**
 * @brief A 24 bit RGBA color.
 * 
 * A struct that defines an RGBA Color. Each value is a float between 0.0f and 1.0f.
 */
struct Color
{
	/**
	 * @brief The red component of the color
	 * 
	 * min: 0.0f, max: 1.0f
	 * 
	 * @var r
	 */
	float r = 1.0f;
	/**
	 * @brief The green component of the color
	 * 
	 * min: 0.0f, max: 1.0f
	 * 
	 * @var g
	 */
	float g = 1.0f;
	/**
	 * @brief The blue component of the color
	 * 
	 * min: 0.0f, max: 1.0f
	 * 
	 * @var b
	 */
	float b = 1.0f;
	/**
	 * @brief The alpha component of the color
	 * 
	 * min: 0.0f, max: 1.0f
	 * 
	 * @var a
	 */
	float a = 1.0f;
};

#endif /* COLOR_H_ */
