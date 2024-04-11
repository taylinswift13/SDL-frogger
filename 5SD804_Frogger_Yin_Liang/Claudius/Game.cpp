#include "Game.h"
#include "RenderManager.h"
#include "ResourceManager.h"
#include "CollisionManager.h"

Game::Game(ResourceManager& resourceManager) : m_resourceManager(resourceManager)
{
	frog.Initialize(resourceManager);
	background.Initialize(resourceManager);
	car1.Initialize(resourceManager, -60, Vector2(500, 672-48), CarType::Type3);
	car6.Initialize(resourceManager, -60, Vector2(400, 672 - 48), CarType::Type2);
	car7.Initialize(resourceManager, -60, Vector2(300, 672 - 48), CarType::Type5);
	car2.Initialize(resourceManager, 65, Vector2(0, 672 - 48 *2), CarType::Type2);
car8.Initialize(resourceManager, 65, Vector2(100, 672 - 48 * 2), CarType::Type3);
car4.Initialize(resourceManager, 80, Vector2(400, 672 - 48 * 3), CarType::Type4);
car9.Initialize(resourceManager, 80, Vector2(550, 672 - 48 * 3), CarType::Type3);
car10.Initialize(resourceManager, 80, Vector2(300, 672 - 48 * 3), CarType::Type2);
car5.Initialize(resourceManager, 70, Vector2(200, 672 - 48 * 4), CarType::Type5);
car11.Initialize(resourceManager, 70, Vector2(400, 672 - 48 * 4), CarType::Type4);
car3.Initialize(resourceManager, 75, Vector2(500, 672 - 48 * 5), CarType::Type3);
car12.Initialize(resourceManager, 75, Vector2(0, 672 - 48 * 5), CarType::Type4);
log1.Initialize(resourceManager, 60, Vector2(100, 240));
log2.Initialize(resourceManager, 60, Vector2(300, 240));
log3.Initialize(resourceManager, 60, Vector2(500, 240));
log4.Initialize(resourceManager, -40, Vector2(0, 192));
log5.Initialize(resourceManager, -40, Vector2(300, 192));
log6.Initialize(resourceManager, -40, Vector2(500, 192));
log7.Initialize(resourceManager, 50, Vector2(50, 144));
log8.Initialize(resourceManager, 50, Vector2(290, 144));
log9.Initialize(resourceManager, 50, Vector2(480, 144));
log10.Initialize(resourceManager, -70, Vector2(210, 288));
log11.Initialize(resourceManager, -70, Vector2(450, 288));
log12.Initialize(resourceManager, -70, Vector2(600, 288));
log13.Initialize(resourceManager, 80, Vector2(0, 336));
log14.Initialize(resourceManager, 80, Vector2(370, 336));
log15.Initialize(resourceManager, 80, Vector2(650, 336));
destination1.Initialize(resourceManager, Vector2(22, 93));
destination2.Initialize(resourceManager, Vector2(168, 93));
destination3.Initialize(resourceManager, Vector2(310, 93));
destination4.Initialize(resourceManager, Vector2(454, 93));
destination5.Initialize(resourceManager, Vector2(598,93));
healthpoint1.Initialize(resourceManager, Vector2(0,723));
healthpoint2.Initialize(resourceManager, Vector2(24, 723));
healthpoint3.Initialize(resourceManager, Vector2(48, 723));
healthpoint4.Initialize(resourceManager, Vector2(72, 723));
frogStartPosition = Vector2(312, 672);
}
Game::~Game()
{
}

bool Game::Enter(int& width, int& height, std::string& title)
{
	width = 672;
	height = 768;
	title = "Frogger";
	return true;
}

bool Game::Update(float dt)
{
	frog.Update(dt);
	background.Update(dt);
	car1.Update(dt);
	car2.Update(dt);
	car3.Update(dt);
	car4.Update(dt);
	car5.Update(dt);
	car6.Update(dt);
	car7.Update(dt);
	car8.Update(dt);
	car9.Update(dt);
	car10.Update(dt);
	car11.Update(dt);
	car12.Update(dt);
	log1.Update(dt);
	log2.Update(dt);
	log3.Update(dt);
	log4.Update(dt);
	log5.Update(dt);
	log6.Update(dt);
	log7.Update(dt);
	log8.Update(dt);
	log9.Update(dt);
	log10.Update(dt);
	log11.Update(dt);
	log12.Update(dt);
	log13.Update(dt);
	log14.Update(dt);
	log15.Update(dt);
	if (CollisionManager::CheckCollision(frog.collider, car1.collider) ||
		CollisionManager::CheckCollision(frog.collider, car2.collider) ||
		CollisionManager::CheckCollision(frog.collider, car3.collider) ||
		CollisionManager::CheckCollision(frog.collider, car4.collider) ||
		CollisionManager::CheckCollision(frog.collider, car5.collider) ||
		CollisionManager::CheckCollision(frog.collider, car6.collider) ||
		CollisionManager::CheckCollision(frog.collider, car7.collider) ||
		CollisionManager::CheckCollision(frog.collider, car8.collider) ||
		CollisionManager::CheckCollision(frog.collider, car9.collider) ||
		CollisionManager::CheckCollision(frog.collider, car10.collider) ||
		CollisionManager::CheckCollision(frog.collider, car11.collider) ||
		CollisionManager::CheckCollision(frog.collider, car12.collider))
	{
		healthpointnow--;
		frog.trans.position = frogStartPosition;
		frog.trans.rotation = 0;
	}
	if (frog.trans.position.y >= 144 && frog.trans.position.y <= 380&&
		frog.trans.position.x>=0&&frog.trans.position.x<=672)
	{
		if (CollisionManager::CheckCollision(frog.collider, log1.collider) ||
			CollisionManager::CheckCollision(frog.collider, log2.collider) ||
			CollisionManager::CheckCollision(frog.collider, log3.collider))
		{
			frog.trans.position.x += dt * 60;
		}
		else if (CollisionManager::CheckCollision(frog.collider, log4.collider) ||
			CollisionManager::CheckCollision(frog.collider, log5.collider) ||
			CollisionManager::CheckCollision(frog.collider, log6.collider))
		{
			frog.trans.position.x += dt * -40;
		}
		else if (CollisionManager::CheckCollision(frog.collider, log7.collider) ||
			CollisionManager::CheckCollision(frog.collider, log8.collider) ||
			CollisionManager::CheckCollision(frog.collider, log9.collider))
		{
			frog.trans.position.x += dt * 50;
		}
		else if (CollisionManager::CheckCollision(frog.collider, log10.collider) ||
			CollisionManager::CheckCollision(frog.collider, log11.collider) ||
			CollisionManager::CheckCollision(frog.collider, log12.collider))
		{
			frog.trans.position.x += dt * -70;
		}
		else if (CollisionManager::CheckCollision(frog.collider, log13.collider) ||
			CollisionManager::CheckCollision(frog.collider, log14.collider) ||
			CollisionManager::CheckCollision(frog.collider, log15.collider))
		{
			frog.trans.position.x += dt * 80;
		}
		else
		{
			healthpointnow --;
			frog.trans.position = frogStartPosition;
			frog.trans.rotation = 0;
		}
	}
	if (CollisionManager::CheckCollision(frog.collider, destination1.collider))
	{
		destination1.oncollision1 = true;
		frog.trans.position = frogStartPosition;
		frog.trans.rotation = 0;
	}
	if (CollisionManager::CheckCollision(frog.collider, destination2.collider))
	{
		destination2.oncollision2 = true;
		frog.trans.position = frogStartPosition;
		frog.trans.rotation = 0;
	}
	if (CollisionManager::CheckCollision(frog.collider, destination3.collider))
	{
		destination3.oncollision3= true;
		frog.trans.position = frogStartPosition;
		frog.trans.rotation = 0;
	}
	if (CollisionManager::CheckCollision(frog.collider, destination4.collider))
	{
		destination4.oncollision4 = true;
		frog.trans.position = frogStartPosition;
		frog.trans.rotation = 0;
	}
	if (CollisionManager::CheckCollision(frog.collider, destination5.collider))
	{
		destination5.oncollision5 = true;
		frog.trans.position = frogStartPosition;
		frog.trans.rotation = 0;
	}
	
	return true;
}

void Game::Render(RenderManager& renderManager)
{
	background.Render(renderManager);
	car1.Render(renderManager);
	car2.Render(renderManager);
	car3.Render(renderManager);
	car4.Render(renderManager);
	car5.Render(renderManager);
	car6.Render(renderManager);
	car7.Render(renderManager);
	car8.Render(renderManager);
	car9.Render(renderManager);
	car10.Render(renderManager);
	car11.Render(renderManager);
	car12.Render(renderManager);
	log1.Render(renderManager);
	log2.Render(renderManager);
	log3.Render(renderManager);
	log4.Render(renderManager);
	log5.Render(renderManager);
	log6.Render(renderManager);
	log7.Render(renderManager);
	log8.Render(renderManager);
	log9.Render(renderManager);
	log10.Render(renderManager);
	log11.Render(renderManager);
	log12.Render(renderManager);
	log13.Render(renderManager);
	log14.Render(renderManager);
	log15.Render(renderManager);
	if (healthpointnow == 4)
	{
	healthpoint1.Render(renderManager);
	healthpoint2.Render(renderManager);
	healthpoint3.Render(renderManager);
	healthpoint4.Render(renderManager);
	}
	
	if (healthpointnow == 3)
	{
		healthpoint1.Render(renderManager);
		healthpoint2.Render(renderManager);
		healthpoint3.Render(renderManager);
	}
	else if (healthpointnow == 2)
	{
		healthpoint1.Render(renderManager);
		healthpoint2.Render(renderManager);
	}
	else if(healthpointnow==1)
	{
		healthpoint1.Render(renderManager);
	}
	else if (healthpointnow == 0)
	{
		printf("YOU DIEEEEEE!!!");
	}

	frog.Render(renderManager);
	if (destination1.oncollision1)
	{
		destination1.Render(renderManager);
	}
	if (destination2.oncollision2) {
		destination2.Render(renderManager);
	}
	if (destination3.oncollision3)
	{
		destination3.Render(renderManager);
	}
	if (destination4.oncollision4)
	{
		destination4.Render(renderManager);
	}
	if (destination5.oncollision5)
	{
		destination5.Render(renderManager);
	}
}

void Game::OnKeyDown(KeyCode key)
{
	frog.OnKeyDown(key);
}

void Game::OnKeyUp(KeyCode key)
{
}
