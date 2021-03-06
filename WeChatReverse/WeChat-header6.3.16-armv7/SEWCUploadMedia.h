//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSData, NSMutableArray, NSString, WCUrl;

@interface SEWCUploadMedia : NSObject <NSCoding>
{
    NSString *serverID;
    NSString *clientID;
    int type;
    int subType;
    int outType;
    NSData *buffer;
    BOOL isFinished;
    WCUrl *bufferUrl;
    WCUrl *lowBandUrl;
    WCUrl *bufferDataUrl;
    WCUrl *lowBandDataUrl;
    NSMutableArray *thumbUrlsList;
    struct CGSize imgSize;
    NSString *title;
    NSString *desc;
    int imageFrom;
    int imageFilterID;
    BOOL isThumbForPrevMeida;
    BOOL isSyncToWeibo;
    BOOL isSyncToFacebook;
    BOOL isSyncToTwitter;
    BOOL isSyncToQZone;
    NSString *twitterOAuthToken;
    NSString *twitterOAuthTokenSecret;
    NSString *userData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *buffer; // @synthesize buffer;
@property(retain, nonatomic) WCUrl *bufferDataUrl; // @synthesize bufferDataUrl;
@property(retain, nonatomic) WCUrl *bufferUrl; // @synthesize bufferUrl;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) int imageFilterID; // @synthesize imageFilterID;
@property(nonatomic) int imageFrom; // @synthesize imageFrom;
@property(nonatomic) struct CGSize imgSize; // @synthesize imgSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) BOOL isFinished; // @synthesize isFinished;
@property(nonatomic) BOOL isSyncToFacebook; // @synthesize isSyncToFacebook;
@property(nonatomic) BOOL isSyncToQZone; // @synthesize isSyncToQZone;
@property(nonatomic) BOOL isSyncToTwitter; // @synthesize isSyncToTwitter;
@property(nonatomic) BOOL isSyncToWeibo; // @synthesize isSyncToWeibo;
@property(nonatomic) BOOL isThumbForPrevMeida; // @synthesize isThumbForPrevMeida;
@property(retain, nonatomic) WCUrl *lowBandDataUrl; // @synthesize lowBandDataUrl;
@property(retain, nonatomic) WCUrl *lowBandUrl; // @synthesize lowBandUrl;
- (id)mediaBuffer;
@property(nonatomic) int outType; // @synthesize outType;
@property(retain, nonatomic) NSString *serverID; // @synthesize serverID;
@property(nonatomic) int subType; // @synthesize subType;
@property(retain, nonatomic) NSMutableArray *thumbUrlsList; // @synthesize thumbUrlsList;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *twitterOAuthToken; // @synthesize twitterOAuthToken;
@property(retain, nonatomic) NSString *twitterOAuthTokenSecret; // @synthesize twitterOAuthTokenSecret;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *userData; // @synthesize userData;

@end

