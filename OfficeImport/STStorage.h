/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "STSStgObject.h"


__attribute__((visibility("hidden")))
@interface STStorage : STSStgObject {
@private
	Storage* m_pCStorage;
}
-(void)setClass:(SsrwOO_GUID)aClass;
-(int)getChildType:(id)type;
-(id)getChildrenInfo;
-(id)getInfo;
-(id)openStorage:(id)storage withMode:(int)mode;
-(id)openStream:(id)stream withMode:(int)mode;
-(void)close;
-(void)dealloc;
-(id)initWithCStorage:(Storage*)cstorage;
-(id)init;
@end
