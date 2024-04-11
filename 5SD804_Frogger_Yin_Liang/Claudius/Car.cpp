#include "Car.h"
#include "RenderManager.h"

void Car::Initialize(ResourceManager& resourseManager, float speed, Vector2 startPosition, CarType type)
{
	resourseManager.LoadImageFromFile(CarImage, "../Assets/frog.png");
	sprite.SetImage(CarImage);

	this->type = type;
	switch (type)
	{
	case CarType::Type1:
		collider.SetSize(48, 48);
		sprite.SetSource(48, 0, 16, 16);
		break;
	case CarType::Type2:
		collider.SetSize(48, 48);
		sprite.SetSource(64, 0, 16, 16);
		break;
	case CarType::Type3:
		collider.SetSize(96, 48);
		sprite.SetSource(80, 0, 32, 16);
		break;
	case CarType::Type4:
		collider.SetSize(48, 48);
		sprite.SetSource(112, 0, 16, 16);
		break;
	case CarType::Type5:
		collider.SetSize(48, 48);
		sprite.SetSource(128, 0, 16, 16);
		break;
	}
	collider.SetPosition((int)trans.position.x, (int)trans.position.y);
	colliderColor.SetColor(255, 0, 0, 255);

	trans.SetScale(3);
	trans.SetPosition(startPosition.x , startPosition.y);
	this->speed = speed;
	if (speed > 0) {
		trans.SetRotation(180);
	}
}

void Car::Update(float dt)
{
	trans.position.x += dt * speed;

	if (trans.position.x <= -100) {
		trans.position.x = 752;
	}
	else	if (trans.position.x >= 772) {
		trans.position.x = -80;
	}

	collider.SetPosition((int)trans.position.x, (int)trans.position.y);
}

void Car::Render(RenderManager& renderManager)
{
	renderManager.Render(sprite, trans);
//	renderManager.Render(collider.rect, colliderColor);
}
