/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class JSAPIPermissionBitSet, GeneralControlBitSet, DeepLinkBitSet;

@interface UrlPermission : XXUnknownSuperclass <NSCoding> {
	JSAPIPermissionBitSet* m_permissionBitSet;
	GeneralControlBitSet* m_generalControlBitSet;
	DeepLinkBitSet* m_deepLinkBitSet;
}
@property(retain, nonatomic) DeepLinkBitSet* m_deepLinkBitSet;
@property(retain, nonatomic) GeneralControlBitSet* m_generalControlBitSet;
@property(retain, nonatomic) JSAPIPermissionBitSet* m_permissionBitSet;
-(void).cxx_destruct;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
@end

