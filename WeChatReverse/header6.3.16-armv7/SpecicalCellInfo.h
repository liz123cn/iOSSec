//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class CContact;

@interface SpecicalCellInfo : MMObject
{
    unsigned int m_cellType;
    CContact *m_Contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *m_Contact; // @synthesize m_Contact;
@property(nonatomic) unsigned int m_cellType; // @synthesize m_cellType;

@end

