#pragma once
#ifndef _DEFAULTMOTIONCONTROL_
#define _DEFAULTMOTIONCONTROL_ 

#include "MotionGeneration/MotionGenerator.h"

namespace motion
{
	class DefaultMotionControl : public MotionGenerator
	{
	public:
		explicit DefaultMotionControl(const gConfig &config);
		virtual ~DefaultMotionControl();

	protected:
		virtual void IKControlLoop();
		virtual void JointControlLoop();

	private:
		const gConfig _config;
	};
}/* namespace motion */

#endif