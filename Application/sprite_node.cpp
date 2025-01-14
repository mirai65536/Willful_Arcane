#include "sprite_node.hpp"

#include <SFML/Graphics/RenderTarget.hpp>

SpriteNode::SpriteNode( const sf::Texture& texture )
	:	m_sprite( texture )
{

}

SpriteNode::SpriteNode( const sf::Texture& texture, const sf::IntRect& textureRect )
	:	m_sprite( texture, textureRect )
{

}
void SpriteNode::drawCurrent( sf::RenderTarget& target, sf::RenderStates states ) const
{
	target.draw( m_sprite, states );
}