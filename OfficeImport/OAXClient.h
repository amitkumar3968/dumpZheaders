/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "OAXClient.h"


@protocol OAXClient
+(BOOL)sourceDrawableIsTopLevel:(xmlNode*)level;
-(id)readOle:(xmlNode*)ole state:(id)state;
-(void)postprocessHyperlink:(id)hyperlink relationship:(id)relationship state:(id)state;
-(id)readClientTextField:(xmlNode*)field paragraph:(id)paragraph state:(id)state;
-(void)readClientDataFromGraphicalFramePropertiesNode:(xmlNode*)graphicalFramePropertiesNode toDrawable:(id)drawable state:(id)state;
-(void)readClientDataFromGraphicDataNode:(xmlNode*)graphicDataNode toDiagram:(id)diagram state:(id)state;
-(void)readClientDataFromGroupNode:(xmlNode*)groupNode toGroup:(id)group state:(id)state;
-(void)readClientDataFromPictureNode:(xmlNode*)pictureNode toImage:(id)image state:(id)state;
-(void)readClientDataFromShapeNode:(xmlNode*)shapeNode toShape:(id)shape state:(id)state;
-(void)readClientDataFromNode:(xmlNode*)node toDrawable:(id)drawable state:(id)state;
@end

__attribute__((visibility("hidden")))
@interface OAXClient : XXUnknownSuperclass <OAXClient> {
}
+(BOOL)sourceDrawableIsTopLevel:(xmlNode*)level;
-(id)readOle:(xmlNode*)ole state:(id)state;
-(void)postprocessHyperlink:(id)hyperlink relationship:(id)relationship state:(id)state;
-(id)readClientTextField:(xmlNode*)field paragraph:(id)paragraph state:(id)state;
-(void)readClientDataFromGraphicalFramePropertiesNode:(xmlNode*)graphicalFramePropertiesNode toDrawable:(id)drawable state:(id)state;
-(void)readClientDataFromGraphicDataNode:(xmlNode*)graphicDataNode toDiagram:(id)diagram state:(id)state;
-(void)readClientDataFromGroupNode:(xmlNode*)groupNode toGroup:(id)group state:(id)state;
-(void)readClientDataFromPictureNode:(xmlNode*)pictureNode toImage:(id)image state:(id)state;
-(void)readClientDataFromShapeNode:(xmlNode*)shapeNode toShape:(id)shape state:(id)state;
-(void)readClientDataFromNode:(xmlNode*)node toDrawable:(id)drawable state:(id)state;
@end

