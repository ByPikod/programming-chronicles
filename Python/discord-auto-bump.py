import httpx
import asyncio
from datetime import datetime

class Discord:

    def __init__( self, token: str ):
        
        self.client = httpx.AsyncClient()
        
        self.AUTH_HEADERS = {
            'accept': '*/*',
            'authorization': token,
            'content-type': 'application/json',
            'user-agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/106.0.0.0 Safari/537.36 Edg/106.0.1370.37'
        }

    async def bump( self, guild_id: int, channel_id: int ):

        req_url = f'https://discord.com/api/v9/interactions'
        post_data = {
            "type": 2,
            "application_id": "302050872383242240",
            "guild_id": f"{guild_id}",
            "channel_id": f"{channel_id}",
            "session_id": "13ece39b60e58dc316295a2f533a876d",
            "data": {
                "version": "947088344167366704",
                "id": "947088344167366698",
                "name": "bump",
                "type": 1
            },
            "nonce": f"{datetime.now()}"
        }
        
        r = await self.client.post(req_url, json=post_data, headers=self.AUTH_HEADERS)
        print(r)

asyncio.set_event_loop_policy(asyncio.WindowsSelectorEventLoopPolicy())
discord = Discord( token )
asyncio.run( discord.bump( 748913297042046997, 1038428864017342464 ) )