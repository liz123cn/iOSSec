//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WNNoteItemProtocol.h"

@class FavDataItemWrap, MsgRecordDataWrap, NSString;

@interface WNNoteFavItemBase : NSObject <WNNoteItemProtocol>
{
    NSString *localEditorId;
    int type;
    NSString *originXML;
    unsigned long dataSize;
    FavDataItemWrap *_favWrap;
    MsgRecordDataWrap *_msgWrap;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long dataSize; // @synthesize dataSize;
@property(retain, nonatomic) FavDataItemWrap *favWrap; // @synthesize favWrap=_favWrap;
@property(retain, nonatomic) NSString *localEditorId; // @synthesize localEditorId;
@property(retain, nonatomic) MsgRecordDataWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) NSString *originXML; // @synthesize originXML;
@property(nonatomic) int type; // @synthesize type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

