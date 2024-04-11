#include "Log.h"
#include "RenderManager.h"

void Log::Initialize(ResourceManager& resourseManager,float speed, Vector2 startPosition)
	{
	resourseManager.LoadImageFromFile(logImage, "../Assets/frog.png");
	sprite.SetImage(logImage);
	sprite.SetSource(96, 128, 48, 16);
	trans.SetScale(3);
	collider.SetPosition((int)trans.position.x, (int)trans.position.y);
	colliderColor.SetColor(255, 255, 255, 1);
	collider.SetSize(130, 35);
	trans.SetPosition(startPosition.x, startPosition.y);
	this->speed = speed;
	if (speed > 0) {
		trans.SetRotation(180);
	}
}

void Log::Update(float dt)
{
	trans.position.x += dt * speed;

	if (trans.position.x <= -150) {
		trans.position.x = 752;
	}
	else	if (trans.position.x >= 822) {
		trans.position.x = -120;
	}

	collider.SetPosition((int)trans.position.x+6, (int)trans.position.y+6);
}

void Log::Render(RenderManager& renderManager)
{
	renderManager.Render(sprite, trans);
	//renderManager.Render(collider.rect, colliderColor);
}
